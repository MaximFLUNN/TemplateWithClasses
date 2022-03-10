#include "Main.h"
/*
�������� ������

������� �������: http://www.vsokovikov.narod.ru/New_MSDN_API/Console/con_fn.htm
���� � ��������� ����� - https://colorscheme.ru/color-converter.html

������� �� ��������������� ������ � ����������:
- ������������ ����-���� (��� ���� �� ����� �����������):
1) ������� ������������ ��������� ��� ���� (���� �������, ������)
2) ���������� ���� ���� � ����:
<< ������ >>
   �����
�
   ������
<< ����� >>
�� ���� �� ������� ���� ����� ���������� ��������� �����/����.
3) ���� ���� ����������� � ���������:
* ������� ����� �������� (�� ������ ���� ���� ��� ������������),
* ������������ �������� �����, ������� ����� ��������� �� ������� ������
(����� ����� ������������� - ������� ����� ������ ��� ������� �� �����
��� ����������� ������������� backspace),
* ������������ ������������ ������ �������� ����� �������� enter,
* ��� ������� esc - ���� ����������� � ��������� ����,
* ������, ���� ������������ ����� ��� ����� (���������� � ������ �����
���� ���� �� ������������ � ������� �������, ������������ �� �����).

- �������� ������� (����� ��� �� ����� � ����� main)
- ���������� �� ���������� ���������� �����.

�������������� �������: ��������� ���������� ���������� ����������� ������������� - ����� ����������.

*/
int main() {
  // ����� �������� ����������� ����
  system("title My Application");

  // �������� ���������� ���� ��� ��������� � �������
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

  // ������������� �������������� � �������� �������
  SetConsoleCP(1251);         // ��������� ������� �������� win-cp 1251 � ����� �����
  SetConsoleOutputCP(1251);   // ��������� ������� �������� win-cp 1251 � ����� ������

  /*

  ���� ���� ������� ���������� � ������ ������� � ��� �������� �� ������� Lucida Console. �� ��������� � ������� ����� ����� Consolas.
  ������� � ��������� ������ ���������� ��������� ������������ �����. ��� ����� ���������cmd, ������� � ��������, � �������� ����� �������� Lucida Console,
  �������� �� � �� ���� ��������� ���������.

  */

  //// ����� ���� ���� � ������:
  ////   ������ �������� - 16-������� ����������� �����,
  ////   �������������� ����������� ����� � �������
  ////   �������������1-R1-G1-B1-�������������2-R2-G2-B2
  //SetConsoleTextAttribute(hStdOut, 2);
  //std::cout << "������ ���� � ��� ������ ���.1" << std::endl;
  //system("pause");

  ////   ������ �������� ����� �������������� �� ������ ������ (������ 1)
  //SetConsoleTextAttribute(hStdOut,
  //  FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
  //std::cout << "������ ���� � ��� ������ ���.2" << std::endl;
  //system("pause");

  ////   ������ �������� ����� �������������� �� ������ ������ (������ 2)
  //SetConsoleTextAttribute(hStdOut,
  //  BACKGROUND_BLUE | BACKGROUND_INTENSITY |
  //  FOREGROUND_RED | FOREGROUND_GREEN |
  //  FOREGROUND_BLUE | FOREGROUND_INTENSITY);
  //std::cout << "������ ���� � ��� ������ ���.3" << std::endl;
  //system("pause");

  //// ��� ������������ �� �++ ����� � 16 �������, ��������, 5D ������������ 0x5D
  //SetConsoleTextAttribute(hStdOut, 0x70);
  //std::cout << "������ ���� � ��� ������ ���.4" << std::endl;
  //system("pause");

  int choose_pos = 2; // 0 1 2
  int iKey = 67;
  COORD cursorPos;
  cursorPos.X = 0;
  cursorPos.Y = 0;
  SetConsoleCursorPosition(hStdOut, cursorPos);
  // ����� ����� ��� ��� ���� ������� � �������
  SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
  system("CLS");

  
  while (iKey != KEY_EXIT || iKey != KEY_ENTER) {
      switch (iKey)
      {
      case KEY_ARROW_UP:
          choose_pos--;
          choose_pos--;
      case KEY_ARROW_DOWN:
          choose_pos++;
      default:
          system("CLS");
          // Rechange
          if (choose_pos != 1 && choose_pos != 2 && choose_pos != 0) {
              choose_pos = 0;
          }

          cursorPos = { 5, 0 };
          SetConsoleCursorPosition(hStdOut, cursorPos);
          std::cout << "Start    " << std::endl;
          cursorPos = { 4, 1 };
          SetConsoleCursorPosition(hStdOut, cursorPos);
          std::cout << "Settings     " << std::endl;
          cursorPos = { 5, 2 };
          SetConsoleCursorPosition(hStdOut, cursorPos);
          std::cout << "Exit    " << std::endl;

          if (choose_pos == 0) {
              cursorPos = { 2, 0 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << "<<";
              cursorPos = { 11, 0 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << ">>";
          }
          else if (choose_pos == 1) {
              cursorPos = { 1, 1 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << "<<";
              cursorPos = { 13, 1 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << ">>";
          }
          else if (choose_pos == 2) {
              cursorPos = { 2, 2 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << "<<";
              cursorPos = { 10, 2 };
              SetConsoleCursorPosition(hStdOut, cursorPos);
              std::cout << ">>";
          }
          iKey = _getch();
          break;
      }
  }




  /*cursorPos = { 5, 0 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  std::cout << "Start    " << std::endl;
  cursorPos = { 4, 1 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  std::cout << "Settings     " << std::endl;
  cursorPos = { 5, 2 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  std::cout << "Exit    " << std::endl;*/


  /*if (choose_pos == 0) {
      cursorPos = { 2, 0 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << "<<";
      cursorPos = { 11, 0 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << ">>";
  }
  else if (choose_pos == 1) {
      cursorPos = { 1, 1 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << "<<";
      cursorPos = { 13, 1 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << ">>";
  }
  else if (choose_pos == 2) {
      cursorPos = { 2, 2 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << "<<";
      cursorPos = { 10, 2 };
      SetConsoleCursorPosition(hStdOut, cursorPos);
      std::cout << ">>";
  }*/

  cursorPos = { 0, 0 };
  SetConsoleCursorPosition(hStdOut, cursorPos);
  _getch();
  system("CLS");



  //std::cout << "����� ���� �������" << std::endl;
  //system("pause");

  // ������ ����� ���� (������)
  int rez = (2 << 6);   // == 2 * Math.pow(2, 6) == A0 � �����������������
  rez += (2 << 4);      // 10 -> 10000000 -> + 100000 = 10100000
                        // 1) HEX  #0A0, 2)RGB rgb(0, 170, 0)
  //SetConsoleTextAttribute(hStdOut, rez);
  //std::cout << "������ ���� ������� ����� ��� ������� ����� " << rez << " ��� 10100000 ��� A0" << std::endl << "������� �������...";
  //system("pause");

  //system("CLS");
  //system("pause");

  // �������� ������
  //system("CLS");
  //std::cout << "� ������ ������� ����� ������ � ������ �������� ���� � ������ �������...";
  
  //SetConsoleCursorPosition(hStdOut, cursorPos);
  //std::cout << "����� ������ ����� ���" << std::endl << "�� �� ������� �������� �� ����� ������" << std::endl;
  //system("pause");

  //SetConsoleTextAttribute(hStdOut, 0x70);
  //system("CLS");

  // �������� ������� ������
  std::cout << "\n\n";
  for (int IR = 0; IR <= 3; IR++) {
    for (int k = 0; k < 3; k++) {
      for (int GB = 0; GB <= 3; GB++) {
        rez = (IR << 6) + (GB << 4);
        SetConsoleTextAttribute(hStdOut, rez);
        if (k == 1)
          std::cout << "  " << IR << " " << GB << "   ";
        else
          std::cout << "        ";
      }
      std::cout << std::endl;
    }
  }
  std::cout << std::endl;

  // ���������� ����� ���� �������
  /*SetConsoleTextAttribute(hStdOut, 0x70);
  system("pause");*/

  // ������ ��������������
  //cursorPos = { 5,1 };           // �-�� ������ �������� ����
  //for (int i = 0; i < 6; i++) {
  //  SetConsoleCursorPosition(hStdOut, cursorPos);
  //  for (int j = 0; j < 6; j++) std::cout << '.';
  //  cursorPos.Y += 1;
  //}
  //std::cout << std::endl;
  //system("pause");

  //system("CLS");

  // �������� �������� ���� ��� ����� ������
  cursorPos = { 0, 0 };
  int len = 30;  // ������ ���� �����
  SetConsoleCursorPosition(hStdOut, cursorPos);
  DWORD cWrittenChars;
  FillConsoleOutputCharacter(hStdOut, (TCHAR)'_', len, cursorPos, &cWrittenChars);  // ���������� ������ � �������� ������ ������� �������� ����� ���
  SetConsoleCursorPosition(hStdOut, cursorPos);

  // ���� ������ � �������������� �� ���� insert
  // ����� �� ������� ESC, �� ���� ����� ����� ��������� � ������� �������
  iKey = 67;              // ������ ��������
  CONSOLE_SCREEN_BUFFER_INFO cbsi;

  while (iKey != KEY_EXIT && len > 0) {
    switch (iKey)
    {
    case KEY_ARROW_LEFT:
      GetConsoleScreenBufferInfo(hStdOut, &cbsi);       // ��������� ���������� � �������� �������� ������ �������
      cursorPos.X = cbsi.dwCursorPosition.X - 1;        // ������� ������� ��������� ������� �� ������ �����
      SetConsoleCursorPosition(hStdOut, cursorPos);
      len++;
      iKey = 67;
      break;
    case KEY_ARROW_RIGHT:
      GetConsoleScreenBufferInfo(hStdOut, &cbsi);
      cursorPos.X = cbsi.dwCursorPosition.X + 1;
      SetConsoleCursorPosition(hStdOut, cursorPos);
      len--;
      iKey = 67;
      break;
    default:
      iKey = _getch();
      if (iKey == KEY_EXIT || iKey == ARROW_KEY || iKey == KEY_SPACE
        || iKey == KEY_ARROW_LEFT || iKey == KEY_ARROW_RIGHT) break;
      std::cout << (char)iKey;    // ������ ���� ��� ������ ������ ���������� ��� � �������
      len--;
      break;
    }
  }

  // ��������� ���������� � ������� ����� � ������ (������ ��������)
  wchar_t Chars[31];
  DWORD dwRead;
  ReadConsoleOutputCharacter(hStdOut, Chars, 30, { 5, 5 }, &dwRead);
  Chars[30] = '\0';
  system("CLS");

  std::cout << "Your finale text: "<< Chars << std::endl;
  system("pause");

  return 0;
}
