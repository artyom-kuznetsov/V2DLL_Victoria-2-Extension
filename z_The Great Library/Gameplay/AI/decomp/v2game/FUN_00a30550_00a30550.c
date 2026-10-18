// FUN_00a30550 @ 00a30550 body=[[00a30550, 00a30660]]


void FUN_00a30550(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcStack_108;
  undefined1 *puStack_104;
  undefined4 *puStack_100;
  undefined1 *puStack_fc;
  int *piStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  char *pcStack_ec;
  int *piStack_e8;
  undefined4 uStack_e4;
  undefined4 auStack_a0 [10];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [92];
  
  piStack_e8 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  uStack_e4 = *(undefined4 *)(in_ECX + 0x90);
  pcStack_ec = (char *)0xa3057c;
  (**(code **)(*piStack_e8 + 0x15c))();
  if (*(int *)(in_ECX + 0x94) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(*(int *)(in_ECX + 0x8c) + 0x6bd00) + -4 +
                      *(int *)(in_ECX + 0x94) * 4);
  }
  pcStack_ec = "standard";
  uStack_f4 = 0xa305a7;
  piStack_f0 = piVar4;
  uStack_f4 = (**(code **)(*piVar4 + 0x34))();
  puStack_fc = (undefined1 *)0xa305b3;
  piStack_f8 = piVar4;
  (**(code **)(*piVar4 + 0xe8))();
  piStack_e8 = (int *)(*(int *)(param_1 + 0x6bc88) + 0x1c);
  puStack_fc = (undefined1 *)0xa305ce;
  puVar1 = (undefined4 *)(**(code **)(*(int *)(*(int *)(param_1 + 0x6bc88) + 0x1c) + 0x16c))();
  puVar5 = auStack_a0;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_fc = (undefined1 *)0xa305e9;
  puVar1 = (undefined4 *)(**(code **)(*piStack_e8 + 0x174))();
  puVar5 = (undefined4 *)&stack0xffffff20;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_fc = &stack0xffffff20;
  puStack_100 = auStack_a0;
  puStack_104 = auStack_60;
  pcStack_108 = (char *)0xa3060e;
  D3DXMatrixMultiply();
  pcStack_108 = "ViewProjectionMatrix";
  uVar2 = (**(code **)(*piVar4 + 0x24))(piVar4,0);
  (**(code **)(*piVar4 + 0x98))(piVar4,uVar2,auStack_78);
  pcStack_108 = (char *)0x0;
  (**(code **)(*piVar4 + 0xfc))(piVar4,&pcStack_108,0);
  (**(code **)(*piVar4 + 0x100))(piVar4,0);
  return;
}

