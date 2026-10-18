// FUN_00513c80 @ 00513c80 body=[[00513c80, 00513d1a]]


void FUN_00513c80(void)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  undefined4 *puVar3;
  int unaff_EDI;
  
  if ((char)in_EAX[1] != '\0') {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xa0))();
  }
  iVar1 = *(int *)(unaff_EDI + 0x7b8);
  puVar3 = (undefined4 *)FUN_00aae9af(0x10);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = in_EAX;
    puVar3[1] = iVar1;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 0;
  }
  iVar2 = *(int *)(unaff_EDI + 0x7bc);
  *(undefined4 **)(unaff_EDI + 0x7b8) = puVar3;
  *(int *)(unaff_EDI + 0x7bc) = iVar2 + 1;
  if (iVar2 == 0) {
    *(undefined4 **)(unaff_EDI + 0x7b4) = puVar3;
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar3;
  }
  if (*(int *)(unaff_EDI + 0xcdc) != 0) {
    (**(code **)(*in_EAX + 0x6c))(*(int *)(unaff_EDI + 0xcdc));
  }
  FUN_005c93b0(*(undefined4 *)(unaff_EDI + 0x1c),*(undefined4 *)(unaff_EDI + 0x20));
  return;
}

