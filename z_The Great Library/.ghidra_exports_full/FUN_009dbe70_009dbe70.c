// FUN_009dbe70 @ 009dbe70 body=[[009dbe70, 009dbe8d]]


bool FUN_009dbe70(long param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = _fseek(*(FILE **)(in_ECX + 0x34),param_1,0);
  return iVar1 == 0;
}

