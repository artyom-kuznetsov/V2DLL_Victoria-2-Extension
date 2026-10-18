// __Deletegloballocale @ 00aad652 body=[[00aad652, 00aad672]]


/* Library Function - Single Match
    __Deletegloballocale
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __Deletegloballocale(int *param_1)

{
  undefined4 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = (undefined4 *)FUN_00445f70();
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}

