// FUN_00aaa400 @ 00aaa400 body=[[00aaa400, 00aaa422]]


undefined4 FUN_00aaa400(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)lua_touserdata(param_1,1);
  if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*piVar1)(1);
  }
  return 0;
}

