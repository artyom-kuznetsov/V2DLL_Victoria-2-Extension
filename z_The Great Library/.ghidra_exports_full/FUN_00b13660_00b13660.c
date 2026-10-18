// FUN_00b13660 @ 00b13660 body=[[00b13660, 00b136c2]]


void FUN_00b13660(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  uVar1 = param_2 + param_1;
  if ((uVar1 <= (uint)in_ECX[2]) && (*in_ECX != 0)) {
    in_ECX[1] = param_1;
    *(undefined1 *)(*in_ECX + param_1) = 0;
    return;
  }
  in_ECX[2] = uVar1;
  in_ECX[1] = param_1;
  if (*in_ECX == 0) {
    iVar2 = (*(code *)PTR_FUN_00f01b08)(uVar1 + 1,2,4,1,0,0xffffffff);
  }
  else {
    iVar2 = (*(code *)PTR_FUN_00f01b0c)(*in_ECX);
  }
  *in_ECX = iVar2;
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + param_1) = 0;
  }
  return;
}

