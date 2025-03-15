import pymysql
import db_secret

def connect_db():
    connection = pymysql.Connect(
        host='localhost',
        user='root',
        password=db_secret.DATABASE_SECRET_PASS,
        database='person_db',
        charset='utf8',
        port=3306
    )
    print('DB disconnected')
    return connection

def disconnect_db(connection):
    connection.close()
    print('DB disconnected')

connection = connect_db()
disconnect_db(connection)
