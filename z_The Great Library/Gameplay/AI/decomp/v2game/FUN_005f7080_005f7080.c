// FUN_005f7080 @ 005f7080 body=[[005f7080, 005f70bf]]


void FUN_005f7080(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    FUN_00935390(*(undefined4 *)(in_ECX + 0xc),0,0,*(undefined4 *)(in_ECX + 0x10),
                 *(undefined4 *)(in_ECX + 0x14));
    return;
  }
  FUN_00936070(*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
               *(undefined4 *)(in_ECX + 0x14),0);
  return;
}

