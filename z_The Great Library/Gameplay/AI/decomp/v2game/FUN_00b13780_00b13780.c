// FUN_00b13780 @ 00b13780 body=[[00b13780, 00b137c4]]


void FUN_00b13780(void *param_1,size_t param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = in_ECX[1];
  uVar1 = iVar2 + param_2;
  if (uVar1 < (uint)in_ECX[2]) {
    in_ECX[1] = uVar1;
  }
  else {
    FUN_00b13660(uVar1,0);
  }
  FID_conflict__memcpy((void *)(*in_ECX + iVar2),param_1,param_2);
  *(undefined1 *)(*in_ECX + in_ECX[1]) = 0;
  return;
}

