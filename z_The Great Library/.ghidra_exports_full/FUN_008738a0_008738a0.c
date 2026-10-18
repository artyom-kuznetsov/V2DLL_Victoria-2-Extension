// FUN_008738a0 @ 008738a0 body=[[008738a0, 008738d3]]


void FUN_008738a0(void)

{
  int in_ECX;
  undefined **local_14 [3];
  char *local_8;
  
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0xc);
  local_8 = "luabind: smart pointer does not allow ownership transfer";
  std::exception::exception((exception *)local_14,&local_8);
  local_14[0] = std::runtime_error::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_14,&DAT_00e6fb74);
}

