
#include <iostream>
#include <conio.h>
#include <algorithm>
#include <concepts>
#include <random>
#include <vector>

struct Vertex
{
    Vertex() = default;
    Vertex(const float x, const float y, const float z)
        : x{x}, y{y}, z{z} {}

    // Copy Constructor
    Vertex(const Vertex &vertex)
        : x(vertex.x), y(vertex.y), z(vertex.z)
    {
        std::cout << "Copy Constructor Called\n";
    }

    // Move Constructor
    Vertex(const Vertex &&vertex)
        : x(std::move(vertex.x)), y(std::move(vertex.y)), z(std::move(vertex.z))
    {
        std::cout << "Move Constructor Called\n";
    }

    // __Getters__
    const float get_x() const { return x; }

    const float get_y() const { return y; }

    const float get_z() const { return z; }

private:
    float x, y, z;
};

template <typename N>
concept Number = ((std::is_integral_v<N> ||
                   std::is_floating_point_v<N>)&&(!(std::is_same_v<N, char> ||
                                                    std::is_same_v<N, const char> ||
                                                    std::is_same_v<N, bool>)));

void vertex();

// __Initialize Random Numbers__
template <Number N>
void initialize_random_numbers(std::vector<N> &);

template <Number N>
void initialize_random_numbers_2D(std::vector<std::vector<N>> &);

// __Display Functions__
template <typename T>
void display_elements(const std::vector<T> &);

template <typename T>
void display_elements_2D(const std::vector<std::vector<T>> &);

int main()
{
    using namespace std;

    vertex();
    cout << string(110U, '-') << '\n';

    // One Dimensional Vectors
    cout << "-> 1D Vectors:-\n";

    vector<uint16_t> small_integers(10U, 0U);
    vector<int> integers(10U, 0U);
    vector<float> floating_points(10U, 0.0F);

    display_elements(small_integers);
    cout << '\n';
    display_elements(floating_points);
    cout << "\n\n";

    initialize_random_numbers(small_integers);
    initialize_random_numbers(integers);
    initialize_random_numbers(floating_points);

    display_elements(small_integers);
    cout << '\n';
    display_elements(integers);
    cout << '\n';
    display_elements(floating_points);
    cout << '\n';
    cout << string(110U, '-') << '\n';

    // Two Dimensional Vectors (Vector Inside Vector)
    cout << "--> 2D Vectors:-\n";
    constexpr uint32_t ROW = 2U, COLUMN = 4U, DEFAULT_VALUE = 0U;

    vector<vector<uint32_t>>
        integer_matrix(ROW,
                       vector<uint32_t>(COLUMN, DEFAULT_VALUE));
    vector<vector<float>>
        floating_points_matrix(ROW,
                               vector<float>(COLUMN, static_cast<float>(DEFAULT_VALUE)));

    display_elements_2D(integer_matrix);
    cout << '\n'
         << fixed;
    display_elements_2D(floating_points_matrix);
    cout << "\n\n";

    initialize_random_numbers_2D(integer_matrix);
    initialize_random_numbers_2D(floating_points_matrix);

    display_elements_2D(integer_matrix);
    cout << '\n'
         << fixed;
    display_elements_2D(floating_points_matrix);
    cout << '\n';
    cout << string(110U, '-') << '\n';

    getch();
    return 0;
}

// Function related with Vertex structure
void vertex()
{
    using namespace std;

    // Call to Copy or Move Constructor
    cout << "----Call to Copy or Move Constructor:-\n";
    vector<Vertex> vertice_copy_move;

    vertice_copy_move.push_back(Vertex(1, 2, 3));
    vertice_copy_move.push_back(Vertex(4, 5, 6));
    vertice_copy_move.push_back(Vertex(7, 8, 9));

    // Call to Move Constructor
    cout << "\n----Call to Move Constructor:-\n";
    vector<Vertex> vertice_copy;

    vertice_copy.reserve(10);

    vertice_copy.push_back(Vertex(1, 2, 3));
    vertice_copy.push_back(Vertex(4, 5, 6));
    vertice_copy.push_back(Vertex(7, 8, 9));

    // No Call to Copy or Move Constructor due to enough capacity and emplace_back() method
    cout << "\n----No Call to Copy or Move Constructor:-\n";
    vector<Vertex> vertices;

    vertices.reserve(10);
    cout << "\nSize :" << vertices.size() << "\t Capacity : " << vertices.capacity() << '\n';

    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);

    cout << "\nSize :" << vertices.size() << "\t Capacity : " << vertices.capacity() << '\n';
    cout << "Elements are:-\n";

    auto display_vertices = [](const vector<Vertex> &vertices)
    {
        cout << "\t x \t y \t z\n";
        for (const auto &vertex : vertices)
        {
            cout << "\t " << vertex.get_x()
                 << " \t " << vertex.get_y()
                 << " \t " << vertex.get_z() << '\n';
        }
    };
    display_vertices(vertices);
}

// __Initialize Random Numbers__
template <Number N>
void initialize_random_numbers(std::vector<N> &numbers)
{
    const N MAX = 100;
    const N MIN = (std::unsigned_integral<N>) ? 0 : -99;

    std::random_device rd;
    using dist_t = std::conditional_t<std::is_floating_point_v<N>,
                                      std::uniform_real_distribution<N>,
                                      std::uniform_int_distribution<N>>;
    dist_t dist(MIN, MAX);
    std::generate(numbers.begin(), numbers.end(), [&dist, &rd]()
                  { return dist(rd); });
}

template <Number N>
void initialize_random_numbers_2D(std::vector<std::vector<N>> &numbers)
{
    const N MAX = 100;
    const N MIN = (std::unsigned_integral<N>) ? 0 : -99;

    std::random_device rd;
    using dist_t = std::conditional_t<std::is_floating_point_v<N>,
                                      std::uniform_real_distribution<N>,
                                      std::uniform_int_distribution<N>>;
    dist_t dist(MIN, MAX);

    for (auto &row : numbers)
    {
        std::generate(row.begin(), row.end(), [&dist, &rd]()
                      { return dist(rd); });
    }
}

// __Display Functions__
template <typename T>
void display_elements(const std::vector<T> &elements)
{
    std::cout << "[ " << elements.at(0);
    for (size_t index = 1; index < elements.size(); ++index)
    {
        std::cout << ", " << elements[index];
    }
    std::cout << " ]";
}

template <typename T>
void display_elements_2D(const std::vector<std::vector<T>> &elements)
{
    std::cout << "{";
    for (size_t row_index = 0; row_index < elements.size(); ++row_index)
    {
        std::cout << "\n [ " << elements[row_index][0];
        for (size_t column_index = 1; column_index < elements[row_index].size(); ++column_index)
        {
            std::cout << ", " << elements[row_index][column_index];
        }
        std::cout << " ]";
    }
    std::cout << "\n}";
}