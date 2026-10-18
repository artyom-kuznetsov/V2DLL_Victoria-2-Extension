// FUN_0043a860 @ 0043a860 body=[[0043a860, 0043a872]]


int FUN_0043a860(void)

{
  uint *puVar1;
  uint3 uVar2;
  uint *in_ECX;
  
  puVar1 = (uint *)in_ECX[1];
  uVar2 = (uint3)((uint)puVar1 >> 8);
  if (*in_ECX < *puVar1) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,*in_ECX < puVar1[1]);
}

