// FUN_0057aa50 @ 0057aa50 body=[[0057aa50, 0057aaa8]]


/* WARNING: Removing unreachable block (ram,0x0057aa90) */

void FUN_0057aa50(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint in_ECX;
  int *in_EDX;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = param_1;
  iVar2 = in_EDX[1];
  uVar3 = iVar2 - *in_EDX >> 2;
  if (in_ECX <= uVar3) {
    if ((in_ECX < uVar3) && (iVar1 = *in_EDX + in_ECX * 4, iVar1 != iVar2)) {
      in_EDX[1] = iVar1;
    }
    return;
  }
  FUN_0057acf0(iVar2,&local_8);
  return;
}

