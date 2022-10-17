#include <windows.h>
#include "typePresser.h"

namespace MACROS {
void typePresser::Press(short int i) {
  switch (i) {
    case 1:
      //MOUSEEVENTF_LEFTDOWN	01	Левая кнопка мыши.
      pressed[i - 1] = false;
      mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
      break;
    case 2:
      //MOUSEEVENTF_RIGHTDOWN	02	Правая кнопка мыши.
      pressed[i - 1] = false;
      mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
      break;
    case 3:
      //VK_CANCEL	03	Обработка комбинации клавиш Control-Break.
      pressed[i - 1] = true;
      keybd_event(VK_CANCEL, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 4:
      //MOUSEEVENTF_MIDDLEDOWN	04	Средняя кнопка мыши (трехкнопочная мышь).
      pressed[i - 1] = true;
      keybd_event(MOUSEEVENTF_MIDDLEDOWN, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 5:
      //VK_XBUTTON1	05	Windows 2000/XP: кнопка X1 мыши.
      pressed[i - 1] = true;
      keybd_event(VK_XBUTTON1, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 6:
      //VK_XBUTTON2	06	Windows 2000/XP: кнопка X2 мыши.
      pressed[i - 1] = true;
      keybd_event(VK_XBUTTON2, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 7:
      //VK_BACK	07	Клавиша BACKSPACE (возврата на позицию).
      pressed[i - 1] = true;
      keybd_event(VK_BACK, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 8:
      //VK_TAB	08	Клавиша TAB (табуляции).
      pressed[i - 1] = true;
      keybd_event(VK_TAB, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 9:
      //VK_CLEAR  09	Клавиша CLEAR.
      pressed[i - 1] = true;
      keybd_event(VK_CLEAR, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 10:
      //VK_RETURN	10	Клавиша ENTER (ввод).
      pressed[i - 1] = true;
      keybd_event(VK_RETURN, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 11:
      //VK_SHIFT	11	Клавиша SHIFT (вспомогательная).
      pressed[i - 1] = true;
      keybd_event(VK_SHIFT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 12:
      //VK_CONTROL	12	Клавиша CTRL (управления).
      pressed[i - 1] = true;
      keybd_event(VK_CONTROL, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 13:
      //VK_MENU	13	Клавиша ALT (навигации по меню).
      pressed[i - 1] = true;
      keybd_event(VK_MENU, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 14:
      //VK_PAUSE	14	Клавиша PAUSE (останов работы).
      pressed[i - 1] = true;
      keybd_event(VK_PAUSE, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 15:
      //VK_CAPITAL	15	Клавиша CAPS LOCK (переключатель регистра символов).
      pressed[i - 1] = true;
      keybd_event(VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 16:
      //VK_ESCAPE	16	Клавиша ESC (отмены).
      pressed[i - 1] = true;
      keybd_event(VK_ESCAPE, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 17:
      //VK_SPACE	17	Клавиша SPACEBAR (пробел).
      pressed[i - 1] = true;
      keybd_event(VK_SPACE, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 18:
      //VK_PRIOR	18	Клавиша PAGE UP (страницей выше).
      pressed[i - 1] = true;
      keybd_event(VK_PRIOR, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 19:
      //VK_NEXT	19	Клавиша PAGE DOWN (страницей ниже).
      pressed[i - 1] = true;
      keybd_event(VK_NEXT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 20:
      //VK_END	20	Клавиша END (в конец текста).
      pressed[i - 1] = true;
      keybd_event(VK_END, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 21:
      //VK_HOME	21	Клавиша HOME (в начало текста).
      pressed[i - 1] = true;
      keybd_event(VK_HOME, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 22:
      //VK_LEFT	22	Клавиша LEFT ARROW (стрелка влево).
      pressed[i - 1] = true;
      keybd_event(VK_LEFT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 23:
      //VK_UP	23	Клавиша UP ARROW (стрелка вверх).
      pressed[i - 1] = true;
      keybd_event(VK_UP, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 24:
      //VK_RIGHT	24	Клавиша RIGHT ARROW (стрелка вправо).
      pressed[i - 1] = true;
      keybd_event(VK_RIGHT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 25:
      //VK_DOWN	25	Клавиша DOWN ARROW (стрелка вниз).
      pressed[i - 1] = true;
      keybd_event(VK_DOWN, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 26:
      //VK_SELECT	26	Клавиша SELECT (выбор).
      pressed[i - 1] = true;
      keybd_event(VK_SELECT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 27:
      //VK_PRINT	27	Клавиша PRINT (печать).
      pressed[i - 1] = true;
      keybd_event(VK_PRINT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 28:
      //VK_EXECUTE	28	Клавиша EXECUTE (исполнить).
      pressed[i - 1] = true;
      keybd_event(VK_EXECUTE, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 29:
      //VK_SNAPSHOT	29	Клавиша PRINT SCREEN (печать экрана).
      pressed[i - 1] = true;
      keybd_event(VK_SNAPSHOT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 30:
      //VK_INSERT	30	Клавиша INS (вставить).
      pressed[i - 1] = true;
      keybd_event(VK_INSERT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 31:
      //VK_DELETE	31	Клавиша DEL (удалить).
      pressed[i - 1] = true;
      keybd_event(VK_DELETE, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 32:
      //VK_HELP	32	Клавиша HELP (справка).
      pressed[i - 1] = true;
      keybd_event(VK_HELP, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 33:
      //VK_LWIN	33	Левая клавиша Windows (Клавиатура Microsoft® Natural® ).
      pressed[i - 1] = true;
      keybd_event(VK_LWIN, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 34:
      //VK_RWIN	34	Правая клавиша Windows (Клавиатура Microsoft® Natural® ).
      pressed[i - 1] = true;
      keybd_event(VK_RWIN, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 35:
      //VK_SLEEP	35	Клавиша Sleep (сна) компьютера.
      pressed[i - 1] = true;
      keybd_event(VK_SLEEP, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 36:
      //VK_MULTIPLY	36	Клавиша умножения (*).
      pressed[i - 1] = true;
      keybd_event(VK_MULTIPLY, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 37:
      //VK_ADD	37	Клавиша сложения (+).
      pressed[i - 1] = true;
      keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 38:
      //VK_SEPARATOR	38	Клавиша разделения (\).
      pressed[i - 1] = true;
      keybd_event(VK_SEPARATOR, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 39:
      //VK_SUBTRACT	39	Клавиша вычитания (-).
      pressed[i - 1] = true;
      keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    case 40:
      //VK_DIVIDE	40	Клавиша деления (/).
      pressed[i - 1] = true;
      keybd_event(VK_DIVIDE, 0, KEYEVENTF_EXTENDEDKEY, 0);
      break;
    default:

      if (i >= 41 && i <= 76) {
        if (i >= 41 && i <= 50) {
          keybd_event(char(i + 7), 0, KEYEVENTF_EXTENDEDKEY, 0);
        } else {
          // числа от 0 до 9, где 41 это 0 и 50 - 9 соответственно.
          // буквы от A до Z, где 51 это A и 76 - Z соответственно.
          keybd_event(char(i + 14), 0, KEYEVENTF_EXTENDEDKEY, 0);
        }
      }
      break;
  }
}

void typePresser::UnPress(short int i) {
  if (pressed[i - 1]) {
    switch (i) {
      case 1:
        //MOUSEEVENTF_LEFTUP	01	Левая кнопка мыши.
        pressed[i - 1] = false;
        mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
        break;
      case 2:
        //MOUSEEVENTF_RIGHTUP	02	Правая кнопка мыши.
        pressed[i - 1] = false;
        mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
        break;
      case 3:
        //VK_CANCEL	03	Обработка комбинации клавиш Control-Break.
        pressed[i - 1] = false;
        keybd_event(VK_CANCEL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 4:
        //MOUSEEVENTF_MIDDLEUP	04	Средняя кнопка мыши (трехкнопочная мышь).
        pressed[i - 1] = false;
        keybd_event(MOUSEEVENTF_MIDDLEUP, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 5:
        //VK_XBUTTON1	05	Windows 2000/XP: кнопка X1 мыши.
        pressed[i - 1] = false;
        keybd_event(VK_XBUTTON1, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 6:
        //VK_XBUTTON2	06	Windows 2000/XP: кнопка X2 мыши.
        pressed[i - 1] = false;
        keybd_event(VK_XBUTTON2, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 7:
        //VK_BACK	07	Клавиша BACKSPACE (возврата на позицию).
        pressed[i - 1] = false;
        keybd_event(VK_BACK, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 8:
        //VK_TAB	08	Клавиша TAB (табуляции).
        pressed[i - 1] = false;
        keybd_event(VK_TAB, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 9:
        //VK_CLEAR  09	Клавиша CLEAR.
        pressed[i - 1] = false;
        keybd_event(VK_CLEAR, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 10:
        //VK_RETURN	10	Клавиша ENTER (ввод).
        pressed[i - 1] = false;
        keybd_event(VK_RETURN, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 11:
        //VK_SHIFT	11	Клавиша SHIFT (вспомогательная).
        pressed[i - 1] = false;
        keybd_event(VK_SHIFT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 12:
        //VK_CONTROL	12	Клавиша CTRL (управления).
        pressed[i - 1] = false;
        keybd_event(VK_CONTROL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 13:
        //VK_MENU	13	Клавиша ALT (навигации по меню).
        pressed[i - 1] = false;
        keybd_event(VK_MENU, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 14:
        //VK_PAUSE	14	Клавиша PAUSE (останов работы).pressed[i - 1] = false;
        keybd_event(VK_PAUSE, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 15:
        //VK_CAPITAL	15	Клавиша CAPS LOCK (переключатель регистра символов).pressed[i - 1] = false;
        keybd_event(VK_CAPITAL, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 16:
        //VK_ESCAPE	16	Клавиша ESC (отмены).pressed[i - 1] = false;
        keybd_event(VK_ESCAPE, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 17:
        //VK_SPACE	17	Клавиша SPACEBAR (пробел).pressed[i - 1] = false;
        keybd_event(VK_SPACE, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 18:
        //VK_PRIOR	18	Клавиша PAGE UP (страницей выше).pressed[i - 1] = false;
        keybd_event(VK_PRIOR, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 19:
        //VK_NEXT	19	Клавиша PAGE DOWN (страницей ниже).pressed[i - 1] = false;
        keybd_event(VK_NEXT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 20:
        //VK_END	20	Клавиша END (в конец текста).pressed[i - 1] = false;
        keybd_event(VK_END, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 21:
        //VK_HOME	21	Клавиша HOME (в начало текста).
        pressed[i - 1] = false;
        keybd_event(VK_HOME, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 22:
        //VK_LEFT	22	Клавиша LEFT ARROW (стрелка влево).
        pressed[i - 1] = false;
        keybd_event(VK_LEFT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 23:
        //VK_UP	23	Клавиша UP ARROW (стрелка вверх).
        pressed[i - 1] = false;
        keybd_event(VK_UP, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 24:
        //VK_RIGHT	24	Клавиша RIGHT ARROW (стрелка вправо).
        pressed[i - 1] = false;
        keybd_event(VK_RIGHT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 25:
        //VK_DOWN	25	Клавиша DOWN ARROW (стрелка вниз).
        pressed[i - 1] = false;
        keybd_event(VK_DOWN, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 26:
        //VK_SELECT	26	Клавиша SELECT (выбор).
        pressed[i - 1] = false;
        keybd_event(VK_SELECT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 27:
        //VK_PRINT	27	Клавиша PRINT (печать).
        pressed[i - 1] = false;
        keybd_event(VK_PRINT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 28:
        //VK_EXECUTE	28	Клавиша EXECUTE (исполнить).
        pressed[i - 1] = false;
        keybd_event(VK_EXECUTE, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 29:
        //VK_SNAPSHOT	29	Клавиша PRINT SCREEN (печать экрана).
        pressed[i - 1] = false;
        keybd_event(VK_SNAPSHOT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 30:
        //VK_INSERT	30	Клавиша INS (вставить).
        pressed[i - 1] = false;
        keybd_event(VK_INSERT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 31:
        //VK_DELETE	31	Клавиша DEL (удалить).
        pressed[i - 1] = false;
        keybd_event(VK_DELETE, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 32:
        //VK_HELP	32	Клавиша HELP (справка).
        pressed[i - 1] = false;
        keybd_event(VK_HELP, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 33:
        //VK_LWIN	33	Левая клавиша Windows (Клавиатура Microsoft® Natural® ).
        pressed[i - 1] = false;
        keybd_event(VK_LWIN, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 34:
        //VK_RWIN	34	Правая клавиша Windows (Клавиатура Microsoft® Natural® ).
        pressed[i - 1] = false;
        keybd_event(VK_RWIN, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 35:
        //VK_SLEEP	35	Клавиша Sleep (сна) компьютера.
        pressed[i - 1] = false;
        keybd_event(VK_SLEEP, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 36:
        //VK_MULTIPLY	36	Клавиша умножения (*).
        pressed[i - 1] = false;
        keybd_event(VK_MULTIPLY, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 37:
        //VK_ADD	37	Клавиша сложения (+).
        pressed[i - 1] = false;
        keybd_event(VK_ADD, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 38:
        //VK_SEPARATOR	38	Клавиша разделения (\).
        pressed[i - 1] = false;
        keybd_event(VK_SEPARATOR, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 39:
        //VK_SUBTRACT	39	Клавиша вычитания (-).
        pressed[i - 1] = false;
        keybd_event(VK_SUBTRACT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      case 40:
        //VK_DIVIDE	40	Клавиша деления (/).
        pressed[i - 1] = false;
        keybd_event(VK_DIVIDE, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
        break;
      default:
        if (i >= 41 && i <= 76) {
          if (i >= 41 && i <= 50) {
            keybd_event(char(i + 7), 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
          } else {
            // числа от 0 до 9, где 41 это 0 и 50 - 9 соответственно.
            // буквы от A до Z, где 51 это A и 76 - Z соответственно.
            keybd_event(char(i + 14), 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
          }
        }
        break;
    }
  }
}

void typePresser::Copy() {
  Press(12);
  Press(53);
  UnPress(12);
  UnPress(53);
}
void typePresser::Paste() {
  Press(12);
  Press(72);
  UnPress(12);
  UnPress(72);
}
void typePresser::Undo() {
  Press(12);
  Press(76);
  UnPress(12);
  UnPress(76);
}
void typePresser::Select() {
  Press(12);
  Press(51);
  UnPress(12);
  UnPress(51);
}
void typePresser::Scroll(int amount) {
  mouse_event(MOUSEEVENTF_WHEEL, 0, 0, amount, 0);
}
void typePresser::CursorPosition(int dx, int dy) {
  SetCursorPos(dx, dy);
}

}