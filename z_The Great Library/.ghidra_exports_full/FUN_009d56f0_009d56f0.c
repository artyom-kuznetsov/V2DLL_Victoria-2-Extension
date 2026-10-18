// FUN_009d56f0 @ 009d56f0 body=[[009d56f0, 009d573e]]


undefined4 FUN_009d56f0(void *param_1,size_t param_2)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x30);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (piVar1[1] - *piVar1 < (int)(*(int *)(in_ECX + 0x34) + param_2)) {
    return 0;
  }
  FID_conflict__memcpy(param_1,(void *)(*piVar1 + *(int *)(in_ECX + 0x34)),param_2);
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + param_2;
  return 1;
}

