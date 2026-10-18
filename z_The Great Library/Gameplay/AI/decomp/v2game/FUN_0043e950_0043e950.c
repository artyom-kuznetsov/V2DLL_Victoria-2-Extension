// FUN_0043e950 @ 0043e950 body=[[0043e950, 0043e96c]]


void FUN_0043e950(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *unaff_EDI;
  
  puVar1 = (undefined4 *)unaff_EDI[1];
  while (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    (**(code **)(*unaff_EDI + 8))(uVar2);
  }
  return;
}

