// FUN_009c4df0 @ 009c4df0 body=[[009c4df0, 009c4e32]]


void FUN_009c4df0(void)

{
  char cVar1;
  int *in_ECX;
  int local_c;
  int local_8;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 == '\0') {
    local_c = (int)(float)in_ECX[0x3f];
    local_8 = (int)(float)in_ECX[0x40];
    (**(code **)(*in_ECX + 0xcc))(&local_c);
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  return;
}

