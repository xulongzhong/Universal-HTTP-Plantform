/* This file generated by DirectStruct v1.14.0 */
#include "IDL_uhp_response.dsc.h"

static int		_DSC_errline = 0 ;

int DSCINIT_UhpResponse( UhpResponse *pst )
{
	int	index[10] = { 0 } ;
	index[0]++; index[0] = 0 ;
	memset( pst , 0x00 , sizeof(UhpResponse) );
	strcpy( pst->version , "1.0.0.0" );
	return 0;
}

#include "fasterjson.h"

int DSCSERIALIZE_JSON_UhpResponse( UhpResponse *pst , char *encoding , char *buf , int *p_len )
{
	int	remain_len ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ;
	index[0]++; index[0] = 0 ;
	remain_len = (*p_len) ;
	memset( tabs , '\t' , 10 );
	len=SNPRINTF(buf,remain_len,"{\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"version\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	if(pst->version[0]==DSCNULL)
	{
	len=SNPRINTF(buf,remain_len,"null"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	else
	{
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->version,strlen(pst->version),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"errorCode\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	if(pst->errorCode[0]==DSCNULL)
	{
	len=SNPRINTF(buf,remain_len,"null"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	else
	{
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->errorCode,strlen(pst->errorCode),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"errorMsg\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	if(pst->errorMsg[0]==DSCNULL)
	{
	len=SNPRINTF(buf,remain_len,"null"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	else
	{
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	JSONESCAPE_EXPAND(pst->errorMsg,strlen(pst->errorMsg),buf,len,remain_len); if(len<0)return -7; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\""); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"value\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,LONGLONG_FORMAT_SPEC"",pst->value); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"count\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->count); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"step\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->step); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"client_cache\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->client_cache); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len," ,\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"	"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\"client_alert_diff\" : "); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"%d",pst->client_alert_diff); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	len=SNPRINTF(buf,remain_len,"}\n"); if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	
	(*p_len) = (*p_len) - remain_len ;
	
	return 0;
}

int DSCSERIALIZE_JSON_DUP_UhpResponse( UhpResponse *pst , char *encoding , char **pp_base , int *p_buf_size , int *p_len )
{
	int	buf_size ;
	int	remain_len ;
	char	*buf = NULL ;
	int	buf_begin_offset ;
	int	len ;
	char	tabs[10+1] ;
	int	index[10] = { 0 } ;
	index[0]++; index[0] = 0 ;
	if( (*pp_base) == NULL )
	{
		char	*tmp = NULL ;
		if( p_buf_size && (*p_buf_size) > 0 )
		{
			buf_size = (*p_buf_size) ;
			tmp = (char*)malloc( buf_size ) ;
			if( tmp == NULL )
				return -2;
			memset( tmp , 0x00 , buf_size );
			(*pp_base) = tmp ;
			remain_len = buf_size - 1 ;
		}
		else
		{
			buf_size = 1024 ;
			tmp = (char*)malloc( buf_size ) ;
			if( tmp == NULL )
				return -2;
			memset( tmp , 0x00 , buf_size );
			(*pp_base) = tmp ;
			remain_len = buf_size - 1 ;
		}
	}
	else
	{
		buf_size = (*p_buf_size) ;
		remain_len = (*p_len) ;
	}
	buf_begin_offset = buf_size-1 - remain_len ;
	buf = (*pp_base) + buf_begin_offset ;
	memset( tabs , '\t' , 10 );
	while(1){len=SNPRINTF(buf,remain_len,"{\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"version\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	if(pst->version[0]==DSCNULL)
	{
	while(1){len=SNPRINTF(buf,remain_len,"null");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	else
	{
	while(1){len=SNPRINTF(buf,remain_len,"\"");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){JSONESCAPE_EXPAND(pst->version,strlen(pst->version),buf,len,remain_len);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	}
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"errorCode\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	if(pst->errorCode[0]==DSCNULL)
	{
	while(1){len=SNPRINTF(buf,remain_len,"null");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	else
	{
	while(1){len=SNPRINTF(buf,remain_len,"\"");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){JSONESCAPE_EXPAND(pst->errorCode,strlen(pst->errorCode),buf,len,remain_len);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	}
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"errorMsg\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	if(pst->errorMsg[0]==DSCNULL)
	{
	while(1){len=SNPRINTF(buf,remain_len,"null");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} if(len<0||remain_len<len)return -1; buf+=len; remain_len-=len;
	}
	else
	{
	while(1){len=SNPRINTF(buf,remain_len,"\"");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){JSONESCAPE_EXPAND(pst->errorMsg,strlen(pst->errorMsg),buf,len,remain_len);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	}
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"value\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,LONGLONG_FORMAT_SPEC"",pst->value);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"count\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"%d",pst->count);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"step\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"%d",pst->step);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"client_cache\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"%d",pst->client_cache);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len," ,\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"	");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\"client_alert_diff\" : ");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"%d",pst->client_alert_diff);if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	while(1){len=SNPRINTF(buf,remain_len,"}\n");if(len<0||remain_len<=len){char *tmp=NULL;int buf_offset=buf-(*pp_base);int new_buf_size;if(buf_size<1024*1024*1024)new_buf_size=buf_size*2;else new_buf_size=buf_size+10*1024*1024;tmp=(char*)realloc(*pp_base,new_buf_size);if(tmp==NULL)return -2;else (*pp_base)=tmp,buf=(*pp_base)+buf_offset,remain_len+=new_buf_size-buf_size,buf_size=new_buf_size,memset(buf,0x00,remain_len+1);}else {break;}} buf+=len; remain_len-=len;
	
	if( p_buf_size )
		(*p_buf_size) = buf_size ;
	if( p_len )
		(*p_len) = buf_size-1 - buf_begin_offset - remain_len ;
	
	return 0;
}

int DSCSERIALIZE_JSON_DUP_UhpResponse_V( void *pv , char *encoding , char **pp_base , int *p_buf_size , int *p_len )
{
	return DSCSERIALIZE_JSON_DUP_UhpResponse( (UhpResponse*)pv , encoding , pp_base , p_buf_size , p_len );
}

funcCallbackOnJsonNode CallbackOnJsonNode_UhpResponse ;
int CallbackOnJsonNode_UhpResponse( int type , char *jpath , int jpath_len , int jpath_size , char *node , int node_len , char *content , int content_len , void *p )
{
	UhpResponse	*pst = (UhpResponse*)p ;
	int	index[10] = { 0 } ;
	int	len = 0 ;
	
	index[0]++; index[0] = 0 ;
	len++; len = 0 ;
	
	if( type & FASTERJSON_NODE_BRANCH )
	{
		if( type & FASTERJSON_NODE_ENTER )
		{
		}
		else if( type & FASTERJSON_NODE_LEAVE )
		{
		}
	}
	else if( type & FASTERJSON_NODE_LEAF )
	{
		/* version */
		if( jpath_len == 8 && strncmp( jpath , "/version" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->version,len,sizeof(pst->version)-1); if(len<0){_DSC_errline=__LINE__;return -7;}}
		/* errorCode */
		if( jpath_len == 10 && strncmp( jpath , "/errorCode" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->errorCode,len,sizeof(pst->errorCode)-1); if(len<0){_DSC_errline=__LINE__;return -7;}}
		/* errorMsg */
		if( jpath_len == 9 && strncmp( jpath , "/errorMsg" , jpath_len ) == 0 )
		{JSONUNESCAPE_FOLD(content,content_len,pst->errorMsg,len,sizeof(pst->errorMsg)-1); if(len<0){_DSC_errline=__LINE__;return -7;}}
		/* value */
		if( jpath_len == 6 && strncmp( jpath , "/value" , jpath_len ) == 0 )
		{NATOLL(content,content_len,pst->value);}
		/* count */
		if( jpath_len == 6 && strncmp( jpath , "/count" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->count);}
		/* step */
		if( jpath_len == 5 && strncmp( jpath , "/step" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->step);}
		/* client_cache */
		if( jpath_len == 13 && strncmp( jpath , "/client_cache" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->client_cache);}
		/* client_alert_diff */
		if( jpath_len == 18 && strncmp( jpath , "/client_alert_diff" , jpath_len ) == 0 )
		{NATOI(content,content_len,pst->client_alert_diff);}
	}
	
	return 0;
}

int DSCDESERIALIZE_JSON_UhpResponse( char *encoding , char *buf , int *p_len , UhpResponse *pst )
{
	char	jpath[ 1024 + 1 ] ;
	int	nret = 0 ;
	memset( jpath , 0x00 , sizeof(jpath) );
	nret = TravelJsonBuffer( buf , jpath , sizeof(jpath) , & CallbackOnJsonNode_UhpResponse , (void*)pst ) ;
	if( nret )
		return nret;
	
	return 0;
}

int DSCDESERIALIZE_JSON_UhpResponse_V( char *encoding , char *buf , int *p_len , void *pv )
{
	return DSCDESERIALIZE_JSON_UhpResponse( encoding , buf , p_len , (UhpResponse*)pv );
}
int DSCGetErrorLine_UhpResponse()
{
	return _DSC_errline;
}

