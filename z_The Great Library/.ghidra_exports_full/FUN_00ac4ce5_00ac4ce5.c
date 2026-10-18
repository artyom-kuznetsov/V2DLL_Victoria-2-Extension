// UnDecorator @ 00ac4ce5 body=[[00ac4ce5, 00ac4d53]]


/* Library Function - Single Match
    public: __thiscall UnDecorator::UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
UnDecorator::UnDecorator
          (UnDecorator *this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  DAT_00f2097c = param_2;
  DAT_00f20978 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_00f20980 = (char *)0x0;
    DAT_00f20984 = 0;
  }
  else {
    DAT_00f20984 = param_3;
    DAT_00f20980 = param_1;
  }
  DAT_00f20970 = this + 0x2c;
  DAT_00f20988 = param_5;
  DAT_00f2096c = this;
  DAT_00f2098c = param_4;
  DAT_00f20990 = 0;
  return;
}

