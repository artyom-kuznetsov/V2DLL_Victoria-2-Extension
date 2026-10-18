// FUN_0047d1f0 @ 0047d1f0 body=[[0047d1f0, 0047d286] [0047d28a, 0047d314]]


/* WARNING: Removing unreachable block (ram,0x0047d27d) */

void FUN_0047d1f0(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  char local_180 [308];
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b5b78b;
  local_4c = ExceptionList;
  pcVar3 = (char *)(in_ECX + 8);
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  ExceptionList = &local_4c;
  FUN_00409350((char *)(in_ECX + 8),(int)pcVar3 - (in_ECX + 9));
  local_44 = 0;
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  local_44 = 0xffffffff;
  fVar1 = *(float *)(in_ECX + 0x10);
  FUN_009a0940();
  _sprintf(local_180,"%f",(double)fVar1);
  FUN_0099ff90();
  FUN_004013e0();
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_009a0940();
    FUN_0099f770(param_1,0);
  }
  ExceptionList = local_4c;
  return;
}

