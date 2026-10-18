// __fpclass @ 00b34a95 body=[[00b34a95, 00b34b31]]


/* Library Function - Single Match
    __fpclass
   
   Library: Visual Studio 2010 Release */

int __cdecl __fpclass(double _X)

{
  int iVar1;
  undefined4 uStack_8;
  
  if ((_X._6_2_ & 0x7ff0) == 0x7ff0) {
    iVar1 = __sptype();
    if (iVar1 == 1) {
      return 0x200;
    }
    if (iVar1 == 2) {
      uStack_8 = 4;
    }
    else {
      if (iVar1 != 3) {
        return 1;
      }
      uStack_8 = 2;
    }
    return uStack_8;
  }
  if ((((ulonglong)_X & 0x7ff0000000000000) == 0) &&
     ((((ulonglong)_X & 0xfffff00000000) != 0 || (_X._0_4_ != 0)))) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff90) + 0x80;
  }
  if (_X == 0.0) {
    return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffffe0) + 0x40;
  }
  return (-(uint)(((ulonglong)_X & 0x8000000000000000) != 0) & 0xffffff08) + 0x100;
}

