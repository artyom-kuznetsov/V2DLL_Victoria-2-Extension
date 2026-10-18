// FUN_00aa88d0 @ 00aa88d0 body=[[00aa88d0, 00aa8975]]


void FUN_00aa88d0(undefined4 *param_1,uint param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int in_ECX;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  uVar4 = param_3;
  uVar3 = param_2;
  local_8 = param_5;
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4;
  param_2 = FUN_00aa8570(&local_14);
  iVar1 = *(int *)(in_ECX + 4);
  if (((param_2 == iVar1) || (uVar3 < *(uint *)(param_2 + 0xc))) ||
     ((uVar3 <= *(uint *)(param_2 + 0xc) &&
      ((uVar4 < *(uint *)(param_2 + 0x10) ||
       ((uVar4 <= *(uint *)(param_2 + 0x10) &&
        ((param_4 < *(uint *)(param_2 + 0x14) ||
         ((param_4 <= *(uint *)(param_2 + 0x14) && (param_5 < *(int *)(param_2 + 0x18))))))))))))) {
    param_4 = iVar1;
    piVar5 = (int *)&param_4;
  }
  else {
    piVar5 = (int *)&param_2;
  }
  iVar2 = *piVar5;
  if (iVar2 == iVar1) {
    local_c = DAT_00ef2008;
    local_8 = 0xffffffff;
  }
  else {
    local_c = *(undefined4 *)(iVar2 + 0x1c);
    local_8 = *(undefined4 *)(iVar2 + 0x20);
  }
  *param_1 = local_c;
  param_1[1] = local_8;
  return;
}

