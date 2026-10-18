// FUN_00559810 @ 00559810 body=[[00559810, 0055989f]]


void FUN_00559810(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int in_EAX;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [4];
  undefined1 local_10 [4];
  int local_c;
  int *local_8;
  
  local_c = param_1;
  while( true ) {
    iVar3 = param_1 * 2 + 2;
    if (param_2 <= iVar3) break;
    local_8 = (int *)FUN_004468a0(local_10);
    piVar1 = (int *)FUN_004468a0(local_14);
    if (*local_8 < *piVar1) {
      iVar3 = param_1 * 2 + 1;
    }
    *(undefined4 *)(in_EAX + param_1 * 4) = *(undefined4 *)(in_EAX + iVar3 * 4);
    param_1 = iVar3;
  }
  iVar2 = param_1;
  if (iVar3 == param_2) {
    iVar2 = param_2 + -1;
    *(undefined4 *)(in_EAX + param_1 * 4) = *(undefined4 *)(in_EAX + -4 + param_2 * 4);
  }
  FUN_0055a2e0(iVar2,local_c,param_3,param_4);
  return;
}

