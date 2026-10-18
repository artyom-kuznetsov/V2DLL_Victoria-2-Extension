// FUN_00447730 @ 00447730 body=[[00447730, 0044778b]]


undefined4
FUN_00447730(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  char *_Format;
  int iVar1;
  char local_48 [68];
  
  _Format = (char *)FUN_00448270(param_6,param_2,param_3);
  iVar1 = _sprintf_s(local_48,0x40,_Format);
  FUN_004482f0(param_1,param_4,param_5,local_48,iVar1);
  return param_1;
}

