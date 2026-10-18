// FUN_005fb560 @ 005fb560 body=[[005fb560, 005fb5cc] [005fb5d0, 005fb673]]


void FUN_005fb560(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bb910b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xa0) + 0xe4) + 0x10))(1);
  FUN_0063ef30(1,DAT_01259abc);
  (**(code **)(**(int **)(*(int *)(in_ECX + 0xa0) + 0xe4) + 0x10))(0);
  iVar2 = *(int *)(in_ECX + 0x98);
  *(undefined1 *)(iVar2 + 0x238) = 1;
  for (puVar3 = *(undefined4 **)(iVar2 + 0x5c);
      (*(undefined4 **)(iVar2 + 0x5c) <= puVar3 && (puVar3 < *(undefined4 **)(iVar2 + 0x60)));
      puVar3 = puVar3 + 1) {
    (**(code **)(*(int *)*puVar3 + 0x30))();
  }
  iVar2 = FUN_00aae9af(0x770);
  pvStack_14 = (void *)0x0;
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)
             FUN_00754a00(iVar2,*(undefined4 *)(in_ECX + 0x9c),*(undefined4 *)(in_ECX + 0x98),
                          *(undefined4 *)(in_ECX + 0xa0));
  }
  iVar2 = *(int *)(in_ECX + 0xa0);
  pvStack_14 = (void *)0x2;
  *(undefined1 *)(iVar2 + 0x88) = 1;
  puVar1 = *(undefined4 **)(iVar2 + 0xe0);
  if ((puVar3 != puVar1) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  *(undefined4 **)(iVar2 + 0xe0) = puVar3;
  ExceptionList = pvStack_1c;
  return;
}

