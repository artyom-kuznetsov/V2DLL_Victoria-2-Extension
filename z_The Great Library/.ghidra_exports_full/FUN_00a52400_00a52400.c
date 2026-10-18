// FUN_00a52400 @ 00a52400 body=[[00a52400, 00a524ec]]


void FUN_00a52400(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_c;
  
  iVar3 = *(int *)(in_ECX + 0x1cc) << 5;
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_c = (undefined4)(longlong)ROUND(fVar1 * *(float *)(in_ECX + 0x1d4));
  (**(code **)(**(int **)(param_1 + 100) + 400))
            (*(int **)(param_1 + 100),0,*(undefined4 *)(in_ECX + 0x1c0),local_c,0x20);
  (**(code **)(**(int **)(param_1 + 100) + 0x164))(*(int **)(param_1 + 100),0x112);
  (**(code **)(**(int **)(param_1 + 100) + 0x1a0))
            (*(int **)(param_1 + 100),*(undefined4 *)(in_ECX + 0x1c4));
  local_c = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x1d0));
  uVar2 = local_c;
  local_c = (undefined4)(longlong)ROUND(*(float *)(in_ECX + 0x1d4));
  (**(code **)(**(int **)(param_1 + 100) + 0x148))(*(int **)(param_1 + 100),4,0,0,local_c,0,uVar2);
  return;
}

