// FUN_00804580 @ 00804580 body=[[00804580, 008045a7]]


void FUN_00804580(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_EAX;
  int *in_EDX;
  
  piVar1 = (int *)*in_EDX;
  *in_EAX = 0;
  in_EAX[1] = 0;
  if ((piVar1 != (int *)0x0) && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0)) {
    *in_EAX = *puVar2;
  }
  iVar3 = in_EDX[2];
  in_EAX[2] = iVar3;
  in_EDX[2] = iVar3 + 1;
  return;
}

