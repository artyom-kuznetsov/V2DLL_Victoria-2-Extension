// FUN_00a85be0 @ 00a85be0 body=[[00a85be0, 00a85d03]]


void FUN_00a85be0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int **ppiVar3;
  int *piVar4;
  int *apiStack_e8 [4];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [52];
  int aiStack_54 [20];
  
  apiStack_e8[3] = (int *)0xa85bfb;
  iVar2 = (**(code **)(*in_ECX + 0x114))();
  if (*(char *)(iVar2 + 0x18) == '\0') {
    apiStack_e8[3] = (int *)0x0;
    apiStack_e8[2] = (int *)0x1;
    apiStack_e8[1] = (int *)0xa85c11;
    (**(code **)(*in_ECX + 0x114))();
    apiStack_e8[1] = (int *)0xa85c18;
    FUN_009b6df0();
    apiStack_e8[1] = (int *)0xa85c22;
    FUN_009959e0();
  }
  apiStack_e8[3] = (int *)auStack_88;
  apiStack_e8[2] = (int *)0x2;
  apiStack_e8[1] = param_2;
  apiStack_e8[0] = (int *)0xa85c37;
  (**(code **)(*param_2 + 0xb4))();
  apiStack_e8[0] = aiStack_54;
  (**(code **)(*param_2 + 0xb4))(param_2,0x100);
  D3DXMatrixTranspose(apiStack_e8 + 2,auStack_a0);
  apiStack_e8[3] = (int *)0x0;
  ppiVar3 = apiStack_e8;
  piVar4 = in_ECX + 0x60;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = (int)*ppiVar3;
    ppiVar3 = ppiVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  puVar1 = (undefined4 *)in_ECX[0x5f];
  (**(code **)(*(int *)*puVar1 + 400))((int *)*puVar1,0,puVar1[1],0,*(undefined2 *)(puVar1 + 2));
  (**(code **)(*(int *)*puVar1 + 0x164))((int *)*puVar1,puVar1[3]);
  (**(code **)(*(int *)*puVar1 + 0x144))((int *)*puVar1,5,0,*(ushort *)((int)puVar1 + 10) - 2);
  iVar2 = (**(code **)(*in_ECX + 0x114))();
  if (*(char *)(iVar2 + 0x18) == '\0') {
    FUN_00995b80();
  }
  FUN_00a2e0c0(in_ECX[0x5d]);
  return;
}

