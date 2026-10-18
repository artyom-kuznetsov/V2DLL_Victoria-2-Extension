// FUN_006417b0 @ 006417b0 body=[[006417b0, 00641832] [00641836, 00641843]]


void FUN_006417b0(void)

{
  int *in_ECX;
  undefined4 unaff_EDI;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("Description",0xb);
  local_8 = 0;
  (**(code **)(*in_ECX + 0x3c))(local_2c);
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  FUN_00a5ecc0(unaff_EDI,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

