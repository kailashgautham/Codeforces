cmake_minimum_required(VERSION 3.25)
project(Codeforces)

set(CMAKE_CXX_STANDARD 14)

include_directories("Div3 - 070723")

add_executable(Codeforces
        "Div3 - 070723/rudolphandtictactoe.cpp"
        "Div3 - 070723/rudolphandcuttherope.cpp" "Div3 - 070723/rudolphandtheanothercompetition.cpp" "Div3 - 070723/rudolfandsnowflakes(simple).cpp" "Div4 - 070723/tenwordsofwisdom.cpp" "Div4 - 070723/tomycritics.cpp" "Div4 - 070723/wordonthepaper.cpp" "Div4 - 070723/balancedround.cpp" "Div4 - 070723/cardboardforpictures.cpp")
