<!DOCTYPE html>
<html lang="fr">
<head>
<meta charset="UTF-8">
<title>Print It Solutions</title>
<meta name="viewport" content="width=device-width, initial-scale=1.0">

<style>
body {
  margin: 0;
  font-family: Arial, sans-serif;
  background: #f4f4f4;
  color: #333;
}

header {
  background: #111;
  color: white;
  text-align: center;
  padding: 40px 20px;
}

section {
  padding: 40px 20px;
  text-align: center;
}

.cards, .images {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
  gap: 15px;
  max-width: 1000px;
  margin: auto;
}

.card {
  background: white;
  padding: 20px;
  border-radius: 8px;
  font-weight: bold;
}

.images img {
  width: 100%;
  border-radius: 10px;
}

.buttons {
  display: flex;
  justify-content: center;
  gap: 20px;
}

.btn {
  padding: 15px 25px;
  color: white;
  text-decoration: none;
  border-radius: 30px;
  font-weight: bold;
}

.whatsapp {
  background: #25D366;
}

.instagram {
  background: #E1306C;
}

footer {
  background: #111;
  color: white;
  text-align: center;
  padding: 15px;
}

/* WhatsApp floating */
.whatsapp-float {
  position: fixed;
  bottom: 20px;
  right: 20px;
  background: #25D366;
  border-radius: 50%;
  padding: 12px;
  z-index: 1000;
}

.whatsapp-float img {
  width: 45px;
}
</style>
</head>

<body>

<header>
  <h1>Print It Solutions</h1>
  <p>Impression & Publicité Professionnelle</p>
</header>

<section>
  <h2>Nos Services</h2>
  <div class="cards">
    <div class="card">Impression numérique</div>
    <div class="card">Panneaux & Bâches</div>
    <div class="card">Cartes de visite</div>
    <div class="card">Stickers & Flyers</div>
  </div>
</section>

<section>
  <h2>Nos Réalisations</h2>
  <div class="images">
    <img src="https://picsum.photos/400/250?1">
    <img src="https://picsum.photos/400/250?2">
    <img src="https://picsum.photos/400/250?3">
    <img src="https://picsum.photos/400/250?4">
  </div>
</section>

<section>
  <h2>Contactez-nous</h2>
  <div class="buttons">
    <a href="https://wa.me/212656504245" class="btn whatsapp" target="_blank">WhatsApp</a>
    <a href="https://instagram.com/Print_it_solutions" class="btn instagram" target="_blank">Instagram</a>
  </div>
</section>

<footer>
  © 2026 Print It Solutions - Tous droits réservés
</footer>

<!-- WhatsApp Floating Button -->
<a href="https://wa.me/212656504245" class="whatsapp-float" target="_blank">
  <img src="https://upload.wikimedia.org/wikipedia/commons/6/6b/WhatsApp.svg">
</a>

</body>
</html>
