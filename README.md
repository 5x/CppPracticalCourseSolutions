﻿# CppPracticalCourseSolutions

Repository from my practical works. Contains the source code of programs written me in the course of practical training.
Used for the development IDE: Microsoft Visual Studio Express 2012.

## License

The code is available under the [MIT license](LICENSE).


## Tasks:

* [HealthProfile](#healthprofile)
* [Factorial](#factorial)
* [Проблема Питера Минъюта](#проблема-питера-минъюта)
* [Ханойская башня](#ханойская-башня)
* [Блочная сортировка](#блочная-сортировка)
* [Генератор кроссвордов](#генератор-кроссвордов)
* [Игра «крестики-нолики»](#игра-крестики-нолики)
* [Действия над множествами](#действия-над-множествами)
* [Polinomial](#polinomial)
* [Иерархия наследования Account](#иерархия-наследования-account)
* [CarbonFootprint Abstract Class: Polymorphism](#carbonfootprint-abstract-class-polymorphism)
* [Template](#template)
* [Stream Input Output](#stream-input-output)
* [Exception Handling](#exception-handling)
* [Phishing Scanner](#phishing-scanner)
* [Cooking with Healthier Ingredients](#cooking-with-healthier-ingredients)
* [Быстрая сортировка](#быстрая-сортировка)
* [Standard Template Library (STL)](#standard-template-library-stl)
* [Counting HTML Tags](#counting-html-tags)
* [Other Topics](#other-topics)
* [Preprocessor](#preprocessor)
* [C Legacy Code Topics](#c-legacy-code-topics)


#### [HealthProfile](/3/)

Комп'ютеризація медичних записів може полегшити пацієнтам поділитися своїмипрофілями здоров'я та історії серед своїх різних медичних фахівців. Це може поліпшити якість медичної допомоги, допомогти уникнути конфліктів і помилкових рецептів, скоротити витрати і в надзвичайних ситуаціях може врятувати життя.

У цій вправі ви розробите «стартер» **HealthProfile** клас для людини. Атрибути класу мають включати _first name, last name, gender, date of birth_ (що складаються з окремих атрибутів month, day and year of birth), _height_ (в метрах) і _weight_ (в кілограмах). Ваш клас повинен мати _конструктор_, який отримує ці дані. Для кожного атрибута використайте **set** і **get** функції.

Клас також повинен включати в себе функції, які обчислюють і повертають вік користувача в роках, максимальну частоту серцевих скорочень і діапазону цільового серцевого ритму. Написати програму, яку запитує інформацію людини, створює об''єкт класу **HealthProfile** для цієї людини і виводить інформацію з цього об'єкта, у тому числі ім'я особи, прізвище, стать, дату народження, зріст і вагу, потім обчислює і друкує вік людини у роках, максимальну частоту серцевих скорочень і діапазону цільового серцевого ритму. Слід також відобразити "значення індексу маси тіла".

> _Date: 15.05.2013 [Source code](/3/)_


#### [Factorial](/4.cpp/)
The factorial of a nonnegative integer n is written n! and is defined as follows: `n! = n · (n – 1) · (n – 2) · … · 1` _(for values of n greater than 1)_ and `n! = 1 (for n = 0 or n = 1).` For example, _5! = 5 · 4 · 3 · 2 · 1_, which is 120. 

Use while statements in each of the following:
* Write a program that reads a nonnegative integer and computes and prints its **factorial**.
* Write a program that estimates the value of the **mathematical constant e** by using the formula. Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).
* Write a program that computes the **value of ex** by using the formula
Prompt the user for the desired accuracy of e (i.e., the number of terms in the summation).

> _Date: 16.05.2013 [Source code](/4.cpp/)_


#### [Проблема Питера Минъюта](/5.cpp/)
Существует легенда, что в 1626 году Питер Миньют купил Манхеттен за _24 доллара 00 центов_. Было ли это удачным капиталовложением? Чтобы ответить на этот вопрос, модифицируйте программу для сложных процентов из _рис. 5.6_, чтобы она начинала с основного капитала **$24.00** и вычисляла сумму на депозите со **сложными процентами** в предположении, что деньги пролежали на депозите вплоть до настоящего времени _(к примеру, 379 лет вплоть до 2005 года)_.

Поместите цикл `for`, который производит вычисление сложных процентов, во внешний цикл `for`, варьирующий процентную ставку от **5% до 10%**, и посмотрите на чудеса, происходящие со сложными процентами.

> _Date: 17.05.2013 [Source code](/5.cpp/)_


#### [Ханойская башня](/6/6.42.cpp/)

В этой главе вы изучали функции, которые могут быть легко реализованы как рекурсивно, так и итеративно. В данном упражнении мы представляем задачу, решение которой демонстрирует изящество _рекурсии_, причем ее итеративное решение далеко не очевидно.
 
Каждый подающий надежды программист рано или поздно должен столкнуться с некоторыми классическими задачами. Ханойская башня (см. рис. 6.3) — одна из самых известных среди них. Легенда гласит, что в одном из монастырей  **Дальнего Востока** монахи пытались переместить стопку дисков с одного колышка на другой. 

Начальная стопка имела **64 диска**, нанизанных на один колышек так, что их размеры последовательно уменьшались к вершине. Монахи пытались  переместить эту стопку с этого колышка на второй при условии, что при каждом перемещении можно брать только один диск и больший диск никогда не должен находиться над меньшим диском. Третий колышек предоставляет возможность **временного размещения** дисков. Считают, что когда монахи решат свою задачу, _наступит конец света_, так что у нас мало поводов им помогать. Предположим, что монахи пытаются переместить диски с колышка 1 на  колышек 3. Мы хотим построить алгоритм, который будет печатать четкую  последовательность перемещений дисков с колышка на колышек. 

Если бы мы пытались найти решение этой задачи обычными методами, мы быстро бы обнаружили безнадежность попыток манипуляций дисками. Но если мы решим действовать рекурсивно, проблема сразу становится _легко разрешимой_. 

Перемещение п дисков может быть легко представлено в терминах перемещения только **п - 1 диска** (и, следовательно, рекурсивно): 
* Переместить п — 1 дисков с колышка 1 на колышек 2, используя колышек 3 как место временного размещения. 
* Переместить последний диск (наибольший) с колышка 1 на колышек 3. 
* Переместить п - 1 дисков с колышка 2 на колышек 3, используя колышек 1 как место временного размещения.
 
Этот процесс завершается, когда последняя задача будет состоять из перемещения п = 1 дисков, т.е. окажется базовой задачей. Она соответствует тривиальному перемещению диска без использования места временного размещения. 

Напишите программу решения задачи о Ханойских башнях. Используйте рекурсивную функцию с **четырьмя параметрами**: 
* Количество дисков, которое должно быть перемещено. 
* Колышек, на который эти диски нанизаны первоначально. 
* Колышек, на который эта группа дисков должна быть перемещена. 
* Колышек, используемый как место временного размещения. 

Ваша программа должна печатать четкие инструкции, что нужно делать для  перемещения дисков с **начального колышка на конечный**. Например, чтобы передвинуть группу из трех дисков с колышка 1 на колышек 3, ваша программа должна напечатать следующую последовательность перемещений:
```Cpp
1 -> 3 ("Это означает перемещение одного диска с колышка 1 на колышек 3") 
1 -> 2 
3 -> 2 
-1 -> 3 
2 -> 1 
2 -> 3 
1 -> 3
```

> _Date: 20.05.2013 [Source code](/6/6.42.cpp)_


#### [Блочная сортировка](/7.cpp/)
Блочная сортировка требует наличия **одномерного массива** положительных целых чисел, который нужно сортировать, и временого массива целых чисел размером **n*n**, где n-размер масива который должен сортироваться. Напишите функцию **bucketSort**, которая принимает массив целых чисел и его размер как аргументы и выполняет следующее:

* Поместите каждое значение одномерного массива в строку массива блоков, основываясь на значении его первого разряда. Например, 97 помещается в строку 7, 3 помещается в строку 3, а 100 помещается в строку 0. Это называется _«распределяющий проход»_. 
* Циклически обработайте массив блоков строка за строкой и скопируйте  значения обратно в исходный массив. Это называется _«собирающий Проход»_. Новый порядок предыдущих значений в одномерном массиве будет 100, 3 и 97. 
* Повторите этот процесс для каждого последовательного **разряда** (десятки,  сотни, тысячи и тому подобное). 

На втором проходе 100 разместится в строке 0, 3 разместится в строке 0 (потому что 3 не имеет разряда десятков), а 97 разместится в строке 9. На третьем  проходе 100 поместится в строке 1, 3 поместится в нулевой строке и 97 поместится в нулевой строке (после цифры 3). После последнего собирающего прохода  исходный массив будет **отсортирован**. 

Заметьте, что временный массив блоков в n больше размера массива, который сортируется. Этот метод сортировки обеспечивает более **высокую  производительность** по сравнению с пузырьковой, но требует много больше памяти. 

Для пузырьковой сортировки требуется всего один дополнительный элемент данных. Это пример дилеммы память-время: блочная сортировка _использует больше памяти_, чем пузырьковая, но работает лучше. Другая возможность  заключается в создании временного массива блоков и повторного обмена данными между двумя массивами блоков.

> _Date: 21.05.2013 [Source code](/7.cpp/)_


#### [Генератор кроссвордов](/cross.cpp/)
Большинство людей наверняка сталкивались с решением кроссвордов, но немногие пытались сами составить хотя бы один. Производство кроссвордов является сложной задачей. Она предлагается здесь как проект по теме **обработки строк**, требующий больших усилий. 

В этом проекте имеется множество частных задач, которые должен решить программист, чтобы запустить в работу даже простейшую программу **генерирования кроссвордов**. Например, как представить сетку кроссворда внутри компьютера? Нужно ли использовать ряд строк или двумерные массивы? 

Программисту нужен **источник слов** (т.е. компьютерный словарь), к которому должна обращаться программа. 
В какой форме нужно хранить слова, чтобы упростить сложную обработку, требующуюся программе? По-настоящему честолюбивый читатель захочет генерировать и ту часть головоломки, в которой приводятся **вопросы кроссворда**. Но даже генерация пустого кроссворда является _непростой задачей_.

> _Date: 22.05.2013_ [Source code](/cross.cpp/)_


#### [Игра «крестики-нолики»](https://github.com/5x/TicTacToeCppGame)
Создайте класс `TicTacToe`, который позволит вам написать законченную программу для игры в «крестики-нолики». Класс содержит закрытые данные в массиве целых размером *3 на 3*. Конструктор должен инициализировать все пустое поле *нулями*. Играют два человека. Когда ходит _первый игрок_, поместите в соответствующую клетку 1, когда ходит _второй_ — 2. Каждый ход должен делаться на пустую клетку. После каждого хода проверяйте, не выиграл ли один из игроков и не закончилась ли игра ничьей. Если вы честолюбивы, модифицируйте программу, чтобы за одного из игроков автоматически **ходил компьютер**. Пусть игрок имеет возможность указать, хочет ли он ходить первым или вторым. А если вы крайне честолюбивы, разработайте программу для игры в **трехмерные крестики-нолики** на доске размером 4 на 4 на 4.

> _Date: 23.05.2013 [Source code](https://github.com/5x/TicTacToeCppGame)_


#### [Действия над множествами](/10/)
Создайте класс `IntegerSet`, каждый объект которого может содержать *множество целых чисел* в диапазоне от _0 до 100_. Внутренним представлением множества является массив из единиц и нулей. Элемент массива `а[ i ]` содержит 1, если i входит в множество, в противном случае `а[ i ]` ссодержит 0. Конструктор по умолчанию инициализирует множество т. н. _«пустым множеством»_, т.е. множеством, представление-массив которого содержит одни нули.

Предусмотрите элемент-функции для обычных действий с множествами. Например, определите элемент-функцию **unionOfSets**, которая создает новое множество, являющееся теоретико-множественным _объединением двух существующих_ Глава 10 множеств (т.е. элемент массива нового множества устанавливается в 1, если этот элемент равен 1 в любом или в обоих исходных множествах, и элемент массива нового множества устанавливается в 0, если этот элемент равен 0 в обоих исходных множествах).

Определите элемент-функцию **intersectionOfSets**, которая создает новое множество, являющееся теоретико-множественным _пересечением двух существующих_ множеств (т.е. элемент массива нового множества устанавливается в 0, если этот элемент равен 0 в любом или в обоих исходных множествах, и элемент массива нового множества устанавливается в 1, если этот элемент равен 1 в обоих  исходных множествах).

Предусмотрите элемент-функцию **insertElement**, которая _помещает в множество_ целое число k (устанавливая а[ к ] в 1), элемент-функцию **deleteElement**, которая _удаляет из множества_ целое число т (устанавливая `а[ m ]` в 0).

Предусмотрите элемент-функцию **printSet**, _печатающую множество_ в виде  списка чисел, разделенных пробелами. Печатайте только числа, присутствующие в множестве (т.е. позиции которых в массиве содержат 1).Для пустого  множества печатайте `---`.

Предусмотрите элемент-функцию **isEqualTo**, определяющую, _равны ли два  множества_.

Предусмотрите дополнительный конструктор, принимающий целый массив и размер этого массива, и использует полученный маассив для **инициализации объекта-множества**. 

Напишите программу-драйвер для тестирования вашего класса **IntegerSet**. Создайте несколько объектов IntegerSet. Проверьте, что все ваши элемент-функции работают правильно.

> _Date: 24.05.2013 [Source code](/10/)_


#### [Polinomial](/11/)
Разработайте класс `Polinomial` (полином). Внутренним представлением класса **Polinomial** является массив членов полинома. Каждый член содержит  коэффициент и показатель степени. Член `2х4` имеет коэффициент 2 и показатель степени 4. Разработайте полный класс, содержащий соответствующие функции _конструктора_, _деструктора_, а также функции **set** и **get**. Класс должен обеспечивать путем использования **перегруженных операций** следующие возможности: 
* Перегрузить операцию сложения **(+)**, чтобы _складывать_ два объекта класса Polinomial. 
* Перегрузить операцию вычитания **(-)**, чтобы _вычитать_ два объекта класса Polinomial. 
* Перегрузить операцию присваивания **(=)**, чтобы _присваивать_ один объект класса Polinomial другому. 
* Перегрузить операцию умножения **(*)**, чтобы _перемножать_ два объекта класса Polinomial.
* Перегрузить операцию _сложения с присваиванием_ **(+=)**, операцию _вычитания с присваиванием_ **(-=)**, операцию _умножения с присваиванием_ **(*=)**.

> _Date: 27.05.2013 [Source code](/11/)_


#### [Иерархия наследования Account](/12/)
Создайте иерархию наследования, которую мог бы использовать банк для представления счетов своих клиентов. Все  клиенты могут вносить _(кредит)_ деньги на свои чета и снимать _(дебет)_ деньги со счетов. 
Существуют и более специфические типы счетов. Например, _сберегательный счет_ приносит вкладчику проценты с денег, лежащих на счете. С другой стороны, за _транзакции_ (т.е. кредиты или дебеты), производимые через расчетные счета, взимается определенная плата.

Создайте иерархию с базовым классом `Account` и производными от него классами `SavingsAccount` и `CheckingAccount`. Класс **Account** должен иметь элемент данных типа `double` для представления баланса счета. В классе должен быть предусмотрен _конструктор_, принимающий начальную сумму баланса и использует ее для инициализации элемента данных. Конструктор должен проверять начальный баланс, гарантируя, что он больше или равен 0.0. В противном случае баланс должен устанавливаться равным 0.0 и конструктор должен выводить сообщение об ошибке, указывающее, что был специфицирован недействительный начальный баланс. В классе нужно предусмотреть _три элемент-функции_. Функция **credit** должна прибавлять сумму к текущему балансу, а функция **debit** снимать сумму с текущего баланса, гарантируя при этом, что сумма дебета _не превосходит баланса_ счета. В противном случае следует оставить баланс без изменений и напечатать сообщение `"Debit amount exceeds account balance"`.

Элемент-функция **getBalance** должна возвращать текущий баланс. 
Производный класс **SavingsAccount** должен наследовать функциональные свойства **Account**, но включать также элемент данных типа `double`, специфицирующий процентную ставку, присвоенную данному счету. Конструктор **SavingsAccount** должен принимать начальное значение баланса и значение процентной ставки для **SavingsAccount**. В классе должна быть предусмотрена открытая элемент-функция **calculatelnterest**, которая возвращает число двойной точности, указывающее сумму начисленных процентов по счету. Функция **calculatelnterest** должна вычислять эту суму, умножая текущий баланс на процентную  ставку. [Замечание. _SavingsAccount_ должен наследовать функции **credit** и **debit**, не переопределяя их.] 

Производный класс **CheckingAccount** должен наследовать от класса _Account_ и иметь дополнительный элемент данных типа double, представляющий плату, взимаемую за транзакцию. Конструктор _CheckingAccount_ должен принимать начальный баланс и параметр, указывающий плату за транзакцию. Класс CheckingAccount должен **переопределять функции** credit и debit, чтобы они вычитали из текущего баланса эту плату при любой успешной **транзакции**. Версии этих функций из _CheckingAccount_ для обновления баланса должны вызывать свои базовые версии. Функция debit должна взимать плату только в случае, когда деньги действительно снимаются со счета (т.е. сумма дебета не превосходит баланса счета). [Подсказка. Определите функцию debit для CheckingAccount таким образом, чтобы она возвращала булево значение, указывающее, были ли сняты деньги. Затем используйте возвращаемое значение, чтобы определить, следует ли взимать плату.]

После определения классов иерархии напишите программу, которая создает объекты каждого класса и тестирует их элемент-функции. Прибавьте начисленные проценты к объекту **SavingsAccount**, вызвав сначала его функцию calculatelnterest, а затем передав возвращенное значение функции credit объекта.

> _Date: 28.05.2013 [Source code](/12/)_


#### [Stream Input Output](/15.cpp/)
Напишите программу, которая реализует следующее:

* Создайте пользовательский класс **Complex**, который содержит закрытые целые элементы данных `real` и `imaginary`, и объявляет перегруженные функции-операции извлечения из потока и передачи в поток как **дружественные функции** класса. 
* Определите функции-операции **извлечения из потока** и **передачи в поток**. Функция-операция извлечения из потока должна определять, являются ли вводимые данные корректными, и если нет, устанавливать *failbit** для индикации неправильного ввода. Входные данные должны иметь форму `3 + 8i`.
* Значения могут быть как _положительными_, так и _отрицательными_, и одно из двух значений (действительная или мнимая часть) может отсутствовать. Если значение отсутствует, то соответствующий элемент данных должен устанавливаться равным 0. Операция передачи в поток не должна производить вывод, если произошла ошибка ввода. 

Формат вывода должен быть идентичен  показанному выше формату ввода. Для отрицательных значений мнимой части должен быть напечатан минус вместо плюса.

Напишите функцию **main**, которая тестирует ввод и вывод определенного пользователем класса **Complex** с использованием перегруженных операций извлечения из потока и передачи в поток.

> _Date: 31.05.2013 [Source code](/15.cpp/)_



#### [Exception Handling](/16.cpp/)
Напишите программу, которая выбрасывает **исключение** в глубоко вложенной _функции_, и все-таки перехватывает _исключение_ обработчиком **catch**, следующим за **try**-блоком, охватывающим цепочку вызовов.

> _Date: 03.06.2013 [Source code](/16.cpp/)_


#### [Быстрая сортировка](/19.cpp/)
Базовый алгоритм рекурсивной методики сортировки, называемой быстрой сортировкой, для одномерного вектора значений выглядит следующим образом: 
* Шаг разбиения: Возьмите первый элемент несортированного вектора и определите его окончательное положение в сортированном векторе, т.е. все значения слева от данного элемента будут меньше, а все значения справа — больше  значения данного элемента (как это обеспечить, мы покажем ниже). Мы теперь имеем один элемент, расположенный на своем месте в сортированном векторе, и два несортированных подвектора.
* Шаг рекурсии: Выполните шаг 1 на каждом из несортированных подвекторов. 
Каждый раз после выполнения шага 1 на подвекторе следующий элемент вектора помещается на свое место в отсортированном векторе, и создаются два несортированных подвектора. Когда мы дойдем до подвектора, состоящего из одного элемента, этот элемент будет находиться на своем окончательном месте в упорядоченном векторе. 
Это описание алгоритма в целом кажется достаточно ясным, но как нам определить окончательную позицию первого элемента каждого подвектора? В  качестве примера рассмотрим следующий набор значений (элемент, выделенный жирным — элемент разбиения, — должен быть помещен на свое окончательное место в сортированном векторе): 

```
37 2 6 4 89 8 10 12 68 45
1087 
```

Начиная с правого элемента вектора будем сравнивать каждый элемент с числом 37 до тех пор, пока не будет найден элемент, меньший 37, после чего найденный элемент и 37 должны поменяться местами. Первым элементом, который меньше 37, является число 12, поэтому они меняются местами. Теперь вектор выглядит так:

```
12 2 б 4 89 8 10 37 68 45
```

Элемент 12 выделен курсивом, чтобы указать на то, что он поменялся местами с числом 37. 
Теперь начинаем движение от левого конца вектора, но со следующего элемента после 12, и сравниваем каждый элемент с 37, пока не обнаружим элемент, больший 37, после чего меняем местами 37 и этот найденный элемент. В  
нашем случае первый элемент больший 37 — это 89, так что 37 и 89 меняются местами. Новый вектор имеет вид:

```
12 2 б 4 37 8 10 89 68 45
```

* Теперь начинаем справа, но с элемента, предшествующего 89, и сравниваем каждый элемент с 37 до тех пор, пока не найдем меньший чем 37, и опять поменяем местами 37 и этот элемент. Первый элемент, который меньше 37 —это 10, — меняем местами с 37. Теперь наш вектор имеет вид:

```
12 2 б 4 10 8 37 89 68 45 
```

* Теперь начинаем движение слева, но с элемента, следующего за 10, и сравниваем каждый элемент с 37, пока не обнаружим элемент, больший 37, после чего меняем местами 37 и этот найденный элемент. В нашем случае элементов, больших 37, не осталось, и когда мы сравним 37 с самим собой, это будет означать, что процесс закончен и элемент 37 нашел свое окончательное место. 

После завершения этой операции мы имеем два неупорядоченных подвектора. Подвектор со значениями меньше 37 содержит элементы 12, 2, 6, 4, 10 и 8. Подвектор со значениями больше 37 содержит 89, 68 и 45. Сортировка продолжается путем применения алгоритма разбиения к полученным под-векторам, как это делалось с первоначальным вектором.

На основе описанного выше алгоритма напишите рекурсивную функцию quickSortHelper для сортировки одномерного целого вектора. Функция должна принимать в качестве аргументов начальный и конечный индексы в исходном сортируемом векторе.

> _Date: 10.06.2013 [Source code](/19.cpp/)_


#### [Counting HTML Tags](/xml.cpp/)
Write a program that will take HTML as input and will output the number of HTML tags in the string. The program should use regular expressions to count the number of elements nested at each level. For example, the HTML:
```HTML
<p><strong>hi</strong></p>
```
has a p element (nesting level 0—i.e., not nested in another tag) and a strong element (nesting level 1). For simplicity, use HTML in which none of the elements contain nested elements of the same type—for example, a table element should not contain another table element.

This solution requires a regular expression concept called a back reference to determine the start and end tags of an HTML element. To find these tags, the same word must appear in the start and end tags. A back reference allows you to use a previous match in the expression in another part of the regular expression. When you enclose a portion of a regular expression in parentheses, the match for that subexpression is stored for you. You can then access the result of that expression using the syntax \digit, where digit is a number in the range 1–9. For example, the regular expression `^(7*).*\1$` matches an entire string that starts and ends with one or more 7s. The strings "777abcd777" and`"7abcdef7"` both match this regular expression. The \1 in the preceding regular expression is a back reference indicating that whatever matched the subexpression `(7*)` should also appear at the end of the string. The first parenthesized subexpression is back referenced with \1, the second is back referenced with \2, etc.

You’ll need a recursive function so that you can process the nested HTML elements. In each recursive call, you’ll need to pass the contents of an element as the string to be processed in that call—for example, the contents of the p element in this example’s HTML would be:
```HTML
<strong>hi</strong>
```
Use parentheses to store the content that appears between the start and end tags of a string that matches your regular expression. This value is stored in the match_results object and can be accessed using the [] operator on that object. As with back references, the subexpression matchesare indexed from 1 to 9.

> _Date: 17.06.2013_ [Source code](/xml.cpp/)_


#### [Other Topics](/24.cpp/)
Напишите программу, использующую виртуальные базовые классы. Класс на вершине иерархии должен определять **конструктор**, принимающий по крайней мере **один аргумент** (т.е. класс не должен иметь конструктора по умолчанию). 

Какие требования предъявляются в этом случае к иерархии **наследования**?

> _Date: 18.06.2013 [Source code](/24.cpp/)_


#### [Preprocessor](/28.cpp/)
Напишите программу, использующую макрос **SUMARRAY** для суммирования значений числового массива. **Макрос** должен получать в качестве аргументов имя массива и число элементов.

> _Date: 24.06.2013 [Source code](/28.cpp/)_


#### [C Legacy Code Topics](/29.cpp/)
Создайте **объединение** `Floatingpoint` с элементами `float floatl`, `double doublel` и `long double longDouble`. Напишите программу, которая вводит значения типов `float`, `double` и `long double`, сохраняя их в переменных типа `union Floatingpoint`.
Каждая переменная-объединение должна печататься как `float`, `double` и `long double`. Всегда ли правильно печатаются значения?

> _Date: 25.06.2013 [Source code](/29.cpp/)_

