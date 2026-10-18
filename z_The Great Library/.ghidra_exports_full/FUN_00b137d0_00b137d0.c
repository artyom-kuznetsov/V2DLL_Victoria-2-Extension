// FUN_00b137d0 @ 00b137d0 body=[[00b137d0, 00b1382e]]


void FUN_00b137d0(void *param_1,size_t param_2)

{
  undefined1 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined1 *)*in_ECX;
  if (param_1 == (void *)0x0) {
    if (puVar1 != (undefined1 *)0x0) {
      (*(code *)PTR__free_00f01b10)(puVar1);
      *in_ECX = 0;
      in_ECX[1] = 0;
      in_ECX[2] = 0;
      return;
    }
  }
  else {
    if (puVar1 != (undefined1 *)0x0) {
      in_ECX[1] = 0;
      *puVar1 = 0;
    }
    FUN_00b13660(param_2,0);
    if ((void *)*in_ECX != (void *)0x0) {
      FID_conflict__memcpy((void *)*in_ECX,param_1,param_2);
    }
  }
  return;
}

