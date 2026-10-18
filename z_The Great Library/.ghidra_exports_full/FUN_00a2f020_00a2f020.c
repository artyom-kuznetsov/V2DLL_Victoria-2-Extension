// FUN_00a2f020 @ 00a2f020 body=[[00a2f020, 00a2f06f]]


void FUN_00a2f020(void)

{
  char cVar1;
  int *in_ECX;
  int local_c;
  int local_8;
  
  cVar1 = (**(code **)(*in_ECX + 0x3c))();
  if (cVar1 == '\0') {
    (**(code **)(*(int *)in_ECX[0x54] + 0x2c))();
    local_c = (int)(float)in_ECX[0x3f];
    local_8 = (int)(float)in_ECX[0x40];
    (**(code **)(*in_ECX + 0xcc))(&local_c);
  }
  *(undefined1 *)((int)in_ECX + 0x29) = 1;
  return;
}

