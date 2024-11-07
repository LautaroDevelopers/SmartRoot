""" Importamos de flask (flask y render_template) """
from flask import Flask, render_template 

""" creamos un objeto llamado app """
app = Flask (__name__)

""" creamos la ruta inicial """
@app.route('/')
def home():
    return render_template('main.html')

""" creamos la ruta para nosotros.html """
@app.route('/nosotros')
def nosotros():
    return render_template('nosotros.html')

""" creamos la ruta para productos.html"""
@app.route('/productos')
def productos():
    return render_template('productos.html')

""" Hacemos que corra nuestra aplicacion, es decir que comience a ejecutarse en modo: debug. """
if __name__ == '__main__':
    app.run(debug=True)