// FUN_004cafb0 @ 004cafb0 body=[[004cafb0, 004cb05b]]


void FUN_004cafb0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  char local_108 [260];
  
  __snprintf(local_108,0xff,"%s",&DAT_00ded950);
  FUN_0099ff90(param_1);
  puVar1 = *(undefined4 **)(in_ECX + 8);
  while (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    puVar1 = (undefined4 *)puVar1[2];
    _sprintf(local_108,"%d",uVar2);
    FUN_0099ff90(param_1);
    __snprintf(local_108,0xff,"%s",&DAT_00ded950);
    FUN_0099ff90(param_1);
  }
  return;
}

