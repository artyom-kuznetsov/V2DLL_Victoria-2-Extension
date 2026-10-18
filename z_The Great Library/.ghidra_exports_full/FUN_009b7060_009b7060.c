// FUN_009b7060 @ 009b7060 body=[[009b7060, 009b726e]]


void FUN_009b7060(undefined4 param_1)

{
  int in_ECX;
  char local_108 [260];
  
  __snprintf(local_108,0xff,"%s",&DAT_00e39a1c);
  FUN_0099ff90(param_1);
  _sprintf(local_108,"%d",(int)(*(float *)(in_ECX + 8) * 255.0));
  FUN_0099ff90(param_1);
  __snprintf(local_108,0xff,"%s",&DAT_00ded950);
  FUN_0099ff90(param_1);
  _sprintf(local_108,"%d",(int)(*(float *)(in_ECX + 0xc) * 255.0));
  FUN_0099ff90(param_1);
  __snprintf(local_108,0xff,"%s",&DAT_00ded950);
  FUN_0099ff90(param_1);
  _sprintf(local_108,"%d",(int)(*(float *)(in_ECX + 0x10) * 255.0));
  FUN_0099ff90(param_1);
  __snprintf(local_108,0xff,"%s",&DAT_00ded950);
  FUN_0099ff90(param_1);
  if (*(float *)(in_ECX + 0x14) != DAT_00f092fc) {
    _sprintf(local_108,"%d",(int)(*(float *)(in_ECX + 0x14) * 255.0));
    FUN_0099ff90(param_1);
    __snprintf(local_108,0xff,"%s",&DAT_00ded950);
    FUN_0099ff90(param_1);
  }
  __snprintf(local_108,0xff,"%s",&DAT_00e39a20);
  FUN_0099ff90(param_1);
  return;
}

