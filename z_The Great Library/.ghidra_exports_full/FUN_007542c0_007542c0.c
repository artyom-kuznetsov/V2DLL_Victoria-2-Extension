// FUN_007542c0 @ 007542c0 body=[[007542c0, 0075439a] [0075439e, 007544ed] [007544f1, 00754558] [0075455c, 007545f9] [007545fd, 0075463b]]


void FUN_007542c0(undefined4 param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_2c0 [20];
  uint local_2ac;
  uint local_2a4;
  undefined4 local_294;
  uint local_290;
  undefined4 local_288;
  char local_284 [256];
  undefined4 local_184;
  char local_180 [308];
  void *local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_00b59c6c;
  local_4c = ExceptionList;
  ExceptionList = &local_4c;
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  FUN_009a0940();
  FUN_0099f770(param_1,0);
  FUN_004013e0();
  FUN_004013e0();
  FUN_0043acd0(in_ECX + 0xa4,local_2c0);
  local_44 = 0;
  local_288 = 0xf;
  __snprintf(local_284,0xff,"%s");
  FUN_0099ff90();
  local_44 = 0xffffffff;
  if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_004013e0();
  if (*(char *)(in_ECX + 0xa8) != '\0') {
    fVar1 = *(float *)(in_ECX + 0xac);
    FUN_009a0940();
    local_288 = 0xd;
    _sprintf(local_284,"%f",(double)fVar1);
    FUN_0099ff90();
    FUN_004013e0();
    fVar1 = *(float *)(in_ECX + 0xb0);
    FUN_009a0940();
    local_288 = 0xd;
    _sprintf(local_284,"%f",(double)fVar1);
    FUN_0099ff90();
    FUN_004013e0();
  }
  iVar2 = *(int *)(in_ECX + 0x94);
  while( true ) {
    if (iVar2 == 0) {
      ExceptionList = local_4c;
      return;
    }
    FUN_00990880();
    local_44 = 1;
    local_288 = 0x2f0;
    __snprintf(local_284,0xff,"%s");
    FUN_0099ff90();
    local_44 = 0xffffffff;
    if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    FUN_00990880();
    local_44 = 2;
    local_288 = 1;
    __snprintf(local_284,0xff,"%s");
    FUN_0099ff90();
    local_44 = 0xffffffff;
    if (0xf < local_2ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_288 = 0xf;
    __snprintf(local_284,0xff,"%s");
    FUN_0099ff90();
    FUN_00990880();
    local_44 = 3;
    local_184 = 0x10;
    __snprintf(local_180,0xff,"%s");
    FUN_0099ff90();
    local_44 = 0xffffffff;
    if (0xf < local_290) break;
    iVar2 = *(int *)(iVar2 + 0xc);
    local_290 = 0xf;
    local_294 = 0;
    local_2a4 = local_2a4 & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

