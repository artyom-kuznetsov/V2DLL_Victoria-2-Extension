// FUN_00435f10 @ 00435f10 body=[[00435f10, 004360d9]]


undefined4 * FUN_00435f10(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b40836;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CDirectorySettings::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  local_8 = 1;
  uStack_7 = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x21,0x1c,0x10,FUN_00988530,FUN_00408ad0);
  local_8 = 2;
  _eh_vector_constructor_iterator_(param_1 + 0x91,0x1c,0x10,FUN_00988530,FUN_00408ad0);
  _local_8 = CONCAT31(uStack_7,3);
  *(undefined1 *)(param_1 + 9) = 0;
  _memset(param_1 + 0x11,0,0x40);
  FUN_00409350("common",6);
  FUN_00409350("events",6);
  FUN_00409350("decisions",9);
  FUN_00409350("missions",8);
  FUN_00409350("units",5);
  FUN_00409350("technologies",0xc);
  FUN_00409350(&DAT_00df7d5c,3);
  FUN_00409350("history",7);
  FUN_00409350("interface",9);
  FUN_00409350("localisation",0xc);
  FUN_00409350(&DAT_00df16e0,3);
  FUN_00409350("sound",5);
  FUN_00409350("inventions",10);
  FUN_00409350("poptypes",8);
  FUN_00409350(&DAT_00df0b64,4);
  FUN_00409350("battleplans",0xb);
  ExceptionList = local_10;
  return param_1;
}

