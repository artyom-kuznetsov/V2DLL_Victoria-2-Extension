// FUN_009ddec0 @ 009ddec0 body=[[009ddec0, 009de004]]


void FUN_009ddec0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 *puStack_74;
  undefined4 *puStack_70;
  int iStack_6c;
  undefined1 auStack_54 [12];
  undefined4 local_48 [17];
  
  if (*(int *)(param_1 + 0x1f8) == 0) {
    *(uint *)(param_1 + 0x1fc) = (uint)*(ushort *)(param_1 + 0x1ac);
    *(uint *)(param_1 + 0x200) = (uint)*(ushort *)(param_1 + 0x1ae);
    iStack_6c = 0x9ddef9;
    FUN_009de530();
    return;
  }
  iStack_6c = param_1 + 0x2b0;
  puVar2 = local_48;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  puStack_74 = local_48;
  puStack_78 = (undefined1 *)0x9ddf25;
  puStack_70 = puStack_74;
  D3DXMatrixMultiply();
  piStack_80 = *(int **)(param_1 + 0x214);
  puStack_78 = auStack_54;
  uStack_7c = *(undefined4 *)(param_1 + 0x21c);
  uStack_84 = 0x9ddf42;
  (**(code **)(*piStack_80 + 0x98))();
  uStack_84 = *(undefined4 *)(param_1 + 0x1f8);
  uStack_88 = *(undefined4 *)(param_1 + 0x218);
  (**(code **)(**(int **)(param_1 + 0x214) + 0xd0))(*(int **)(param_1 + 0x214));
  (**(code **)(**(int **)(param_1 + 0x214) + 0x78))
            (*(int **)(param_1 + 0x214),"vXOffset",
             (float)*(int *)(param_1 + 0x2f0) * *(float *)(param_1 + 0x2f4));
  uStack_88 = DAT_00f092fc;
  uStack_84 = DAT_00f092fc;
  piStack_80 = (int *)DAT_00f092fc;
  uStack_7c = DAT_00f092fc;
  (**(code **)(**(int **)(param_1 + 0x214) + 0x88))(*(int **)(param_1 + 0x214),"Color",&uStack_88);
  (**(code **)(**(int **)(param_1 + 0x214) + 0x104))(*(int **)(param_1 + 0x214));
  FUN_009f9d50();
  return;
}

