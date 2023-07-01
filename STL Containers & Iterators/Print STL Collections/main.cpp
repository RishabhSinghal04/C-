
#include <iostream>
#include <conio.h>

#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <vector>

#include <map>
#include <set>
#include <tuple>
#include <utility>

#include <queue>
#include <stack>

#include "assign_random_numbers.h"
#include "display_container.h"
#include "type_number.h"

int main()
{
     using namespace std;

     const uint16_t SET_PRECISION = 4U;
     const int64_t MIN = -1000, MAX = 1000;

     array<int, 10> integers;
     deque<int> integers_2(11U, 0U);
     forward_list<uint16_t> natural_numbers(28U, 1U);
     list<uint16_t> whole_numbers(20U, 0U);
     vector<double> floating_point_numbers(5U, 0U);

     set<double> positive_numbers;
     pair<uint16_t, string> p{0, "Zero"};
     map<int, char> m{{1, 'a'}, {2, 'b'}};
     tuple<uint16_t, char, string> t(1, 'O', "One");

     stack<float> floating_points_small;
     queue<uint32_t> positive_integers;

     vector<pair<uint16_t, string>> number_names{{1, "One"}, {2, "Two"}};
     deque<pair<uint16_t, string>> number_names_2{{3, "Three"}, {2, "Four"}};

     vector<map<int, char>> map_vec;
     map_vec.emplace_back(m);

     deque<tuple<uint16_t, string>> tuple_deque;
     tuple_deque.emplace_back(make_tuple(9, "Nine"));
     tuple_deque.emplace_back(make_tuple(10, "Ten"));

     assign_random_numbers(integers, MIN, MAX);
     assign_random_numbers(integers_2, MIN, MAX);
     assign_random_numbers(natural_numbers, MIN + 1001, MAX);
     assign_random_numbers(whole_numbers, MIN + 1000, MAX);
     assign_random_numbers(floating_point_numbers, MIN, MAX);

     assign_random_numbers(positive_numbers, 10U, MIN + 100, MAX);

     floating_points_small.emplace(1.69007F);
     floating_points_small.emplace(1.357F);
     floating_points_small.emplace(2347.468F);
     floating_points_small.emplace(18790.142F);
     floating_points_small.emplace(15451.9870F);

     positive_integers.emplace(1);
     positive_integers.emplace(2);
     positive_integers.emplace(22);
     positive_integers.emplace(79);
     positive_integers.emplace(121);

     cout << fixed;
     cout.precision(SET_PRECISION);

     cout << "Array : [ " << integers << " ]\n\n"
          << "Deque : [ " << integers_2 << " ]\n\n"
          << "Forward List : [ " << natural_numbers << " ]\n\n"
          << "List : [ " << whole_numbers << " ]\n\n"
          << "Vector : [ " << floating_point_numbers << " ]\n\n";

     cout << "Set : [ " << positive_numbers << " ]\n\n";
     cout << "Pair : [ " << p << " ]\n\n"
          << "Map : {\n"
          << m << "}\n\n"
          << "Tuple : ( " << t << " )\n\n";

     cout << "Vector of Pairs : {"
          << number_names << "\n}\n\n"
          << "Deque of Pairs : {"
          << number_names_2 << "\n}\n\n"
          << "Vector of Maps : {"
          << map_vec << "}\n\n"
          << "Deque of Tuples : {"
          << tuple_deque << "\n}\n\n";

     cout << "Stack :- " << floating_points_small << "\n\n"
          << "Queue :- " << positive_integers << "\n\n";

     getch();
     return 0;
}