#ifndef XMACROS__TYPOPRESSER_H_
#define XMACROS__TYPOPRESSER_H_

namespace MACROS {

class typoPresser {
 public:
  /// Имитирует нажатие на клавиши клавиатуры и компьютерной мыши:
  ///MOUSEEVENTF_LEFTDOWN	01	Левая кнопка мыши.
  ///MOUSEEVENTF_RIGHTDOWN	02	Правая кнопка мыши.
  ///VK_CANCEL	03	Обработка комбинации клавиш Control-Break.
  ///MOUSEEVENTF_MIDDLEDOWN	04	Средняя кнопка мыши (трехкнопочная мышь).
  ///VK_XBUTTON1	05	Windows 2000/XP: кнопка X1 мыши.
  ///VK_XBUTTON2	06	Windows 2000/XP: кнопка X2 мыши.
  ///VK_BACK	07	Клавиша BACKSPACE (возврата на позицию).
  ///VK_TAB	08	Клавиша TAB (табуляции).
  ///VK_CLEAR  09	Клавиша CLEAR.
  ///VK_RETURN	10	Клавиша ENTER (ввод).
  ///VK_SHIFT	11	Клавиша SHIFT (вспомогательная).
  ///VK_CONTROL	12	Клавиша CTRL (управления).
  ///VK_MENU	13	Клавиша ALT (навигации по меню).
  ///VK_PAUSE	14	Клавиша PAUSE (останов работы).pressed[i - 1] = false;
  ///VK_CAPITAL	15	Клавиша CAPS LOCK (переключатель регистра символов).pressed[i - 1]
  ///VK_ESCAPE	16	Клавиша ESC (отмены).pressed[i - 1] = false;
  ///VK_SPACE	17	Клавиша SPACEBAR (пробел).pressed[i - 1] = false;
  ///VK_PRIOR	18	Клавиша PAGE UP (страницей выше).pressed[i - 1] = false;
  ///VK_NEXT	19	Клавиша PAGE DOWN (страницей ниже).pressed[i - 1] = false;
  ///VK_END	20	Клавиша END (в конец текста).pressed[i - 1] = false;
  ///VK_HOME	21	Клавиша HOME (в начало текста).
  ///VK_LEFT	22	Клавиша LEFT ARROW (стрелка влево).
  ///VK_UP	23	Клавиша UP ARROW (стрелка вверх).
  ///VK_RIGHT	24	Клавиша RIGHT ARROW (стрелка вправо).
  ///VK_DOWN	25	Клавиша DOWN ARROW (стрелка вниз).
  ///VK_SELECT	26	Клавиша SELECT (выбор).
  ///VK_PRINT	27	Клавиша PRINT (печать).
  ///VK_EXECUTE	28	Клавиша EXECUTE (исполнить).
  ///VK_SNAPSHOT	29	Клавиша PRINT SCREEN (печать экрана).
  ///VK_INSERT	30	Клавиша INS (вставить).
  ///VK_DELETE	31	Клавиша DEL (удалить).
  ///VK_HELP	32	Клавиша HELP (справка).
  ///VK_LWIN	33	Левая клавиша Windows (Клавиатура Microsoft® Natural® ).
  ///VK_RWIN	34	Правая клавиша Windows (Клавиатура Microsoft® Natural® ).
  ///VK_SLEEP	35	Клавиша Sleep (сна) компьютера.
  ///VK_MULTIPLY	36	Клавиша умножения (*).
  ///VK_ADD	37	Клавиша сложения (+).
  ///VK_SEPARATOR	38	Клавиша разделения (\).
  ///VK_SUBTRACT	39	Клавиша вычитания (-).
  ///VK_DIVIDE	40	Клавиша деления (/).
  /// числа от 0 до 9, где 41 это 0 и 50 - 9 соответственно.
  ///буквы от A до Z, где 51 это A и 76 - Z соответственно.
  /// \param i код клавиши по заявленной выше таблице.
  void Press(short int i);
  /// Имитирует отжатие клавиши клавиатуры и компьютерной мыши:
  ///MOUSEEVENTF_LEFTUP	01	Левая кнопка мыши.
  ///MOUSEEVENTF_RIGHTUP	02	Правая кнопка мыши.
  ///VK_CANCEL	03	Обработка комбинации клавиш Control-Break.
  ///MOUSEEVENTF_MIDDLEUP	04	Средняя кнопка мыши (трехкнопочная мышь).
  ///VK_XBUTTON1	05	Windows 2000/XP: кнопка X1 мыши.
  ///VK_XBUTTON2	06	Windows 2000/XP: кнопка X2 мыши.
  ///VK_BACK	07	Клавиша BACKSPACE (возврата на позицию).
  ///VK_TAB	08	Клавиша TAB (табуляции).
  ///VK_CLEAR  09	Клавиша CLEAR.
  ///VK_RETURN	10	Клавиша ENTER (ввод).
  ///VK_SHIFT	11	Клавиша SHIFT (вспомогательная).
  ///VK_CONTROL	12	Клавиша CTRL (управления).
  ///VK_MENU	13	Клавиша ALT (навигации по меню).
  ///VK_PAUSE	14	Клавиша PAUSE (останов работы).pressed[i - 1] = false;
  ///VK_CAPITAL	15	Клавиша CAPS LOCK (переключатель регистра символов).pressed[i - 1]
  ///VK_ESCAPE	16	Клавиша ESC (отмены).pressed[i - 1] = false;
  ///VK_SPACE	17	Клавиша SPACEBAR (пробел).pressed[i - 1] = false;
  ///VK_PRIOR	18	Клавиша PAGE UP (страницей выше).pressed[i - 1] = false;
  ///VK_NEXT	19	Клавиша PAGE DOWN (страницей ниже).pressed[i - 1] = false;
  ///VK_END	20	Клавиша END (в конец текста).pressed[i - 1] = false;
  ///VK_HOME	21	Клавиша HOME (в начало текста).
  ///VK_LEFT	22	Клавиша LEFT ARROW (стрелка влево).
  ///VK_UP	23	Клавиша UP ARROW (стрелка вверх).
  ///VK_RIGHT	24	Клавиша RIGHT ARROW (стрелка вправо).
  ///VK_DOWN	25	Клавиша DOWN ARROW (стрелка вниз).
  ///VK_SELECT	26	Клавиша SELECT (выбор).
  ///VK_PRINT	27	Клавиша PRINT (печать).
  ///VK_EXECUTE	28	Клавиша EXECUTE (исполнить).
  ///VK_SNAPSHOT	29	Клавиша PRINT SCREEN (печать экрана).
  ///VK_INSERT	30	Клавиша INS (вставить).
  ///VK_DELETE	31	Клавиша DEL (удалить).
  ///VK_HELP	32	Клавиша HELP (справка).
  ///VK_LWIN	33	Левая клавиша Windows (Клавиатура Microsoft® Natural® ).
  ///VK_RWIN	34	Правая клавиша Windows (Клавиатура Microsoft® Natural® ).
  ///VK_SLEEP	35	Клавиша Sleep (сна) компьютера.
  ///VK_MULTIPLY	36	Клавиша умножения (*).
  ///VK_ADD	37	Клавиша сложения (+).
  ///VK_SEPARATOR	38	Клавиша разделения (\).
  ///VK_SUBTRACT	39	Клавиша вычитания (-).
  ///VK_DIVIDE	40	Клавиша деления (/).
  /// числа от 0 до 9, где 41 это 0 и 50 - 9 соответственно.
  ///буквы от A до Z, где 51 это A и 76 - Z соответственно.
  /// \param i код клавиши по заявленной выше таблице.
  void UnPress(short int i);
  /// Симуляция нажатия сочетания клавиш Cntl + C.
  void Copy();
  /// Симуляция нажатия сочетания клавиш Cntl + V.
  void Paste();
  /// Симуляция нажатия сочетания клавиш Cntl + Z.
  void Undo();
  /// Симуляция нажатия сочетания клавиш Cntl + A.
  void Select();
  /// Симуляций прокручивания колёсика мышки.
  /// \param amount Кол-во пикселей, на которое будет прокручена страница. Положительное значение - вверх, отрицательное - вниз.
  void Scroll(int amount);
  /// Устанавливает курсор мыши на заданную позицию относительно левого верхнего края экрана.
  /// \param dx Координата X позиции.
  /// \param dy Координата Y позиции.
  void CursorPosition(int dx, int dy);
 private:
  /// Массив, хранящий в себе статус клавиши: нажата она или нет.
  bool pressed[100];
};

} // MACROS

#endif //XMACROS__TYPOPRESSER_H_
