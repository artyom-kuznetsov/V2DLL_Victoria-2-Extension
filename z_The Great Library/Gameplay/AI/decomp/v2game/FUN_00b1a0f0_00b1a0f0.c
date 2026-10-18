// FUN_00b1a0f0 @ 00b1a0f0 body=[[00b1a0f0, 00b1a147]]


undefined4 * FUN_00b1a0f0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00b13660(*(undefined4 *)(in_ECX + 8),0);
    if ((void *)*param_1 != (void *)0x0) {
      FID_conflict__memcpy((void *)*param_1,*(void **)(in_ECX + 4),*(int *)(in_ECX + 8) + 1);
    }
  }
  return param_1;
}

