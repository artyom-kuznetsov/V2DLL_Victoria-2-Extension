// FUN_00a8bb30 @ 00a8bb30 body=[[00a8bb30, 00a8bbd5]]


float10 FUN_00a8bb30(float param_1,float param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [12];
  float local_18;
  float local_14;
  
  puVar2 = (undefined4 *)(in_ECX + 0x94);
  puVar3 = local_48;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if (((float)(int)(short)(int)local_18 <= param_1) &&
     (param_1 <= (float)((int)*(short *)(in_ECX + 0x126) + (int)(short)(int)local_18))) {
    if (((float)(int)(short)(int)local_14 <= param_2) &&
       (param_2 <= (float)((int)*(short *)(in_ECX + 0x128) + (int)(short)(int)local_14))) {
      return (float10)1;
    }
  }
  return (float10)0;
}

