// FUN_004e0530 @ 004e0530 body=[[004e0530, 004e0647]]


void FUN_004e0530(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 unaff_ESI;
  undefined1 local_2d8 [352];
  undefined1 local_178 [360];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b51547;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_0098ab20();
  if (cVar1 != '\0') {
    FUN_004dff10(local_178,unaff_ESI);
    local_8 = 0;
    FUN_004dcf00(param_1);
    FUN_004dcf00(local_178);
    local_8 = 0xffffffff;
    FUN_004dd290(local_178);
  }
  cVar1 = FUN_0098ab20();
  if (cVar1 != '\0') {
    FUN_004dff10(local_178,param_2);
    local_8 = 1;
    FUN_004dcf00(unaff_ESI);
    FUN_004dcf00(local_178);
    local_8 = 0xffffffff;
    FUN_004dd290(local_178);
  }
  cVar1 = FUN_0098ab20();
  if (cVar1 != '\0') {
    FUN_004dff10(local_2d8,unaff_ESI);
    local_8 = 2;
    FUN_004dcf00(param_1);
    FUN_004dcf00(local_2d8);
    local_8 = 0xffffffff;
    FUN_004dd290(local_2d8);
  }
  ExceptionList = local_10;
  return;
}

