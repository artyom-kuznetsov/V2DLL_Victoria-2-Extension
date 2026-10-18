// FUN_00441d00 @ 00441d00 body=[[00441d00, 00441d30]]


void FUN_00441d00(void)

{
  undefined4 *puVar1;
  int in_EAX;
  int *piVar2;
  int *unaff_EDI;
  undefined1 local_8 [4];
  
  puVar1 = *(undefined4 **)(in_EAX + 0x20);
  *unaff_EDI = 0;
  while (puVar1 != (undefined4 *)0x0) {
    piVar2 = (int *)*puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    piVar2 = (int *)(**(code **)(*piVar2 + 0x28))(local_8);
    *unaff_EDI = *unaff_EDI + *piVar2;
  }
  return;
}

