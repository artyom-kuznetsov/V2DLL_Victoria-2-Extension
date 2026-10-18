// FUN_009baeb0 @ 009baeb0 body=[[009baeb0, 009bb174]]


void FUN_009baeb0(void)

{
  float fVar1;
  int in_ECX;
  char local_140 [316];
  
  FUN_0099f4d0();
  FUN_009a0940();
  _sprintf(local_140,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  _sprintf(local_140,"%s");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  _sprintf(local_140,"%s");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  _sprintf(local_140,"%s");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  _sprintf(local_140,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  _sprintf(local_140,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  FUN_009a0940();
  _sprintf(local_140,"%d");
  FUN_0099ff90();
  FUN_004013e0();
  fVar1 = *(float *)(in_ECX + 0x54);
  FUN_009a0940();
  _sprintf(local_140,"%f",(double)fVar1);
  FUN_0099ff90();
  FUN_004013e0();
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_009a0940();
    _sprintf(local_140,"%d");
    FUN_0099ff90();
    FUN_004013e0();
  }
  if (*(char *)(in_ECX + 0x32) == '\0') {
    FUN_0099f470();
  }
  if ((*(char *)(in_ECX + 0x33) != '\0') && (*(int *)(in_ECX + 0x34) == 0)) {
    FUN_0099f470();
  }
  return;
}

