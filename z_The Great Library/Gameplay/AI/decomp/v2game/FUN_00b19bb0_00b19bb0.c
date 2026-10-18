// FUN_00b19bb0 @ 00b19bb0 body=[[00b19bb0, 00b19c3b]]


undefined4 FUN_00b19bb0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
switchD_00b19bc7_caseD_0:
    return 1;
  }
  if ((*(byte *)(in_ECX + 0x15) & 3) == 0) {
    switch(*(undefined1 *)(in_ECX + 0x14)) {
    case 0:
    case 3:
    case 7:
      goto switchD_00b19bc7_caseD_0;
    case 1:
      FUN_00aedf20(in_ECX + 4,param_1,1);
      return 1;
    case 2:
      FUN_00aedf20(in_ECX + 4,param_1,1);
      return 1;
    case 4:
      FUN_00aedf20(*(undefined4 *)(in_ECX + 4),param_1,2);
      return 1;
    case 5:
      FUN_00aedf20(*(undefined4 *)(in_ECX + 4),param_1,3);
      return 1;
    case 6:
      FUN_00aedf20(*(undefined4 *)(in_ECX + 4),param_1,4);
      return 1;
    }
  }
  return 0;
}

