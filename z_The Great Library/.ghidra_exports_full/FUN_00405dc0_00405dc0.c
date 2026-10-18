// FUN_00405dc0 @ 00405dc0 body=[[00405dc0, 00405e34]]


void FUN_00405dc0(undefined4 param_1,undefined4 param_2)

{
  int unaff_ESI;
  undefined4 *unaff_EDI;
  undefined1 local_44 [48];
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_00408b00();
  FUN_00408b00();
  local_14 = *unaff_EDI;
  local_c = unaff_EDI[1];
  local_10 = 0x3d99999a;
  local_8 = DAT_00f092fc;
  (**(code **)(**(int **)(unaff_ESI + 8) + 0xa4))(local_44);
  FUN_00986af0();
  *(undefined4 *)(*(int *)(unaff_ESI + 8) + 0x1c8) = param_2;
  return;
}

