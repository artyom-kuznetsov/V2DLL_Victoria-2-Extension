// FUN_009365d0 @ 009365d0 body=[[009365d0, 0093663a]]


void FUN_009365d0(uint *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = DAT_012587e4;
  for (uVar3 = *param_1; (*param_1 <= uVar3 && (uVar3 < param_1[1])); uVar3 = uVar3 + 8) {
    iVar1 = *(int *)(uVar3 + 4);
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + iVar1 * 4) + 0xbe8) + param_3 * 4) + 0x70) =
         1;
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + param_3 * 4) + 0xbe8) + iVar1 * 4) + 0x70) =
         1;
  }
  return;
}

