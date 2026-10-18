// FUN_00a463a0 @ 00a463a0 body=[[00a463a0, 00a467c6]]


void FUN_00a463a0(void)

{
  int iVar1;
  char cVar2;
  int *unaff_ESI;
  float in_stack_00000010;
  float in_stack_00000014;
  float in_stack_00000018;
  
  iVar1 = unaff_ESI[0x50];
  (**(code **)(*unaff_ESI + 0xa0))
            (*(undefined4 *)(iVar1 + 0x11c),*(undefined8 *)(iVar1 + 0xa4),
             *(undefined8 *)(iVar1 + 0xac),*(undefined8 *)(iVar1 + 0xb4));
  FUN_00401030(in_stack_00000014 * in_stack_00000014 + in_stack_00000010 * in_stack_00000010 +
               in_stack_00000018 * in_stack_00000018);
  cVar2 = FUN_009c0e20();
  if (cVar2 != '\0') {
    return;
  }
  return;
}

