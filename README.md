736-1_kkn-1-1.c
Написать программу, печатающую в stdout фразу "Hello, World!" на отдельной строке.
Формат входных данных: нет
Формат выходных данных: string

736-1_kkn-1-2.c
Написать программу, принимающую на вход два числа, разделенные пробелом и суммирующую их. Ввод чисел производить из stdin, вывод результатов в stdоut. Вводимые числа не превосходят по модулю 2147483647.
Формат входных данных: int
Формат выходных данных: int

736-1_kkn-1-3.c
Написать программу, принимающую на вход числа х и у, разделенные пробелом и вычисляющую х в степени y. Ввод чисел производить из stdin, вывод результата - в stdout. Вводимые числа не превосходят по модулю 2147483647. Реализовывать возведение в степень через цикл/рекурсию не допускается.
Формат входных данных: int
Формат выходных данных: int

736-1_kkn-2-1.c
На вход подаётся число 𝑛 ∈
N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖|≤ 2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение среднего арифметического
от всех 𝑥.

736-1_kkn-2-2.c
На вход пода-
ётся число 𝑛 ∈ N : 𝑛 ≤ 2147483647, а также 𝑛 чисел 𝑥𝑖 ∈ Z : |𝑥𝑖|≤2147483647 для любого целого 𝑖 от 1 до 𝑛. Вывести значение П𝑥.

736-1_kkn-3-1.c
Программа должна:
1. считать из stdin количество элементов 𝑛 ∈ N, 𝑛 ≤ 2147483647;
2. считать из stdin элементы 𝑥𝑖 ∈ Z: |𝑥𝑖
| ≤ 2147483647, 𝑖 = 1, 𝑛, и
сохранить их в список в прямом порядке;
3. считать из stdin число 𝑘 ∈ N, 𝑘 ≤ 2147483647, и удалить из списка
𝑘-й элемент;
4. считать из stdin число 𝑚 ∈ Z, |𝑚| ≤ 2147483647, и удалить из
списка элемент со значением 𝑚;
5. считать из stdin числа 𝑎 ∈ N, 𝑎 ≤ 2147483647 и 𝑏 ∈ Z, |𝑏| ≤
2147483647, и вставить значение 𝑏 после 𝑎-го элемента списка;
6. считать из stdin числа 𝑐 ∈ N, 𝑐 ≤ 2147483647 и 𝑑 ∈ Z, |𝑑| ≤
2147483647, и вставить значение 𝑑 перед 𝑐-м элементом списка.
После пунктов 2-6 выводить в stdout содержимое списка на отдельной
строке.

736-1_kkn-4-1.c
Реализовать очередь  и необходимые для работы с ней функции согласно варианту, используя наработки из практической работы 3.

736-1_kkn-5-1.c
Реализовать бинарное дерево и написать программу, принимающую на вход:
количеств пар n ∈ N, n ≤ 2147483647; 
пар:keyi, valuei⟩ ∈ Z2 : |keyi|, |valuei| ≤ 2147483647, i = 1,n; 
числа a, b, c ∈ Z : |a|, |b|, |c| ≤ 2147483647,
и выводящую для каждого из чисел a, b, c уровень бинарного дерева, на котором находится узел с соответствующим ключом, а также значение, содержащееся в данном узле, или −1, если заданный ключ отсутствует.
