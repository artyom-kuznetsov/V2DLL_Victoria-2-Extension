// _Set_back @ 00548e50 body=[[00548e50, 00548e83]]


/* Library Function - Single Match
    private: void __thiscall std::basic_filebuf<char,struct std::char_traits<char>
   >::_Set_back(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall
std::basic_filebuf<char,std::char_traits<char>_>::_Set_back
          (basic_filebuf<char,std::char_traits<char>_> *this)

{
  basic_filebuf<char,std::char_traits<char>_> *pbVar1;
  basic_filebuf<char,std::char_traits<char>_> *pbVar2;
  
  pbVar2 = (basic_filebuf<char,std::char_traits<char>_> *)**(int **)(this + 0x10);
  pbVar1 = this + 0x48;
  if (pbVar2 != pbVar1) {
    *(basic_filebuf<char,std::char_traits<char>_> **)(this + 0x3c) = pbVar2;
    *(int *)(this + 0x40) = **(int **)(this + 0x30) + **(int **)(this + 0x20);
  }
  **(int **)(this + 0x10) = (int)pbVar1;
  **(int **)(this + 0x20) = (int)pbVar1;
  **(undefined4 **)(this + 0x30) = this + (0x49 - (int)pbVar1);
  return;
}

